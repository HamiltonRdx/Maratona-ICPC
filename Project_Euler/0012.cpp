// ============================================================================
//
//       Filename:  0012.cpp
//
//    Description:  Project Euler 12 - Highly divisible triangular number
//                  projecteuler.net/problem=12
//
//        Version:  1.0
//        Created:  09/Apr/2013 14:35:28
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <cstring>
#include <cmath>
#include <vector>
using namespace std;


const int MAX = 1 << 14;
const int TAM = (MAX - 1) / 2;


int main()
{
    //eh_composto[n] indica se o número 1+2*n é composto ou não.
    bool *eh_composto = new bool[TAM];
    memset(eh_composto, 0, TAM * sizeof(bool));
    eh_composto[0] = 1; // 1 não é primo
    const int LIM = sqrt(MAX) / 2;
    for (int i = 1; i <= LIM; i++)
        if (!eh_composto[i])
            for (int j = 2 * i * (i + 1); j < TAM; j += 2 * i + 1)
                eh_composto[j] = 1;

    // Preenche vetor com primos
    vector<int> primos;
    vector<int>::iterator it;
    primos.reserve(2000);
    primos.push_back(2);
    for (int i = 1; i < TAM; i++)
        if (!eh_composto[i])
            primos.push_back(2 * i + 1);

    // Libera a memória
    delete[] eh_composto;

    int i = 1, n = 1, k, divisores = 0, exp;
    while (divisores < 501)
    {
        n += ++i;
        k = n;
        it = primos.begin();
        divisores = 1;
        while (k != 1)
        {
            exp = 1;
            while (k % *it == 0)
            {
                k /= *it;
                exp++;
            }
            divisores *= exp;
            it++;
        }
    }
    printf("%d tem %d divisores\n", n, divisores);
    return 0;
}

