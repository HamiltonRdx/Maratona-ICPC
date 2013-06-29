// ============================================================================
//
//       Filename:  0010.cpp
//
//    Description:  Project Euler 10 - Summation of primes
//                  projecteuler.net/problem=10
//
//                  Soma de todos os primos menores que 2000000
//
//        Version:  1.0
//        Created:  09/03/2012 11:35:15 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <iostream>
#include <cstring>
using namespace std;


typedef unsigned long long int ULLI;
const int MAX = 2000000; // 2MB


int main()
{
    char eh_primo[MAX];
    memset(eh_primo, 0xff, sizeof(eh_primo));
    eh_primo[1] = 0; eh_primo[2] = 1;
    ULLI soma = 2;
    for (int i = 3; i < MAX; i += 2)
    {
        if (eh_primo[i] == -1)
        {
            for (int j = 2 * i; j < MAX; j += i)
                eh_primo[j] = 0;
            eh_primo[i] = 1;
            soma += i;
        }
    }
    cout << soma << endl;
    return 0;
}
