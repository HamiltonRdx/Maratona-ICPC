// ============================================================================
//
//       Filename:  0014.cpp
//
//    Description:  Project Euler 14 - Longest Collatz sequence
//                  projecteuler.net/problem=14
//
//                  Um bruteforce usando memoization.
//
//        Version:  1.0
//        Created:  08/Apr/2013 19:14:02
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <cstring>


#define TAM 2000000 // O tamanho da tabela deve ser maior ou igual a 1000000


int main()
{
    long long unsigned n;
    int i, count, maior = 0, maior_i = 0, collatz[TAM];
    memset(collatz, 0, sizeof(collatz));
    for (i = 1; i < 1000000; i++)
    {
        n = i;
        count = 1;
        while (n != 1)
        {
            if (n < TAM && collatz[n])
            {
                count += collatz[n];
                break;
            }
            if (n % 2)
                n = 3 * n + 1;
            else
                n /= 2;
            count++;
        }
        collatz[i] = count;
        if (count > maior)
        {
            maior = count;
            maior_i = i;
        }
    }
    printf("%d\n", maior_i);
    return 0;
}

