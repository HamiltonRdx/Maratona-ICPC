// ============================================================================
// 
//       Filename:  0007.cpp
// 
//    Description:  projecteuler.net/problem=7
//                  Calcular o 10001-ésimo número primo
//
//                  Usei o crivo de eratóstenes. Para estimar o tamanho do
//                  vetor usei o teorema dos números primos:
//                      `primo_n ~= n *(ln(n) + ln(ln(n)))`.
//
//        Version:  1.0
//        Created:  08/24/2012 07:49:08 PM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
// 
// ============================================================================
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include "../benchmark.h"
using namespace std;

typedef unsigned long long int ULLI;
const int MAX = 195000;

int main()
{
    timespec time1, time2;
    clock_gettime(CLOCK_REALTIME, &time1);

    vector<ULLI> primos;
    char eh_primo[MAX];

    // -1 indica que não foi mexido
    memset(eh_primo, 0xff, sizeof(eh_primo));
    eh_primo[1] = 0;
    
    // Marca 2 como primo e seus múltiplos como compostos
    eh_primo[2] = 1; primos.push_back(2);
    for (int i=2*2; i<MAX; i+=2)
        eh_primo[i] = 0;

    // Só precisa passar pelos impares
    for (ULLI i=3; i<MAX && primos.size() < 19001; i+=2)
    {
        if (eh_primo[i] == -1)
        {
            // Marca múltiplos de i como compostos. Os múltiplos menores que
            // i*i já foram marcados, pois são múltiplos de outros primos.
            for (ULLI j=i*i; j<MAX; j+=2*i)
                eh_primo[j] = 0;

            // Marca i como primo e adiciona a vetor de primos
            eh_primo[i] = 1;
            primos.push_back(i);
        }
    }

    clock_gettime(CLOCK_REALTIME, &time2);

    cout << primos.at(10000) << endl;

    cout << diff(time1,time2).tv_sec << ":"
         << diff(time1,time2).tv_nsec << endl;

    return 0;
}
