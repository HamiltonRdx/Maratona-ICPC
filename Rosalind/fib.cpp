// ============================================================================
//
//       Filename:  fib.cpp
//
//    Description:  Rabbits and Recurrence Relations
//                  rosalind.info/problems/fib/
//
//        Version:  1.0
//        Created:  13/Mar/2013 22:42:18
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>

// Acho que deve ser suficiente
typedef unsigned long long ULL;

int main()
{
    int n, k;
    ULL f[50];
    while (scanf("%d %d", &n, &k) != EOF)
    {
        f[1] = f[2] = 1;
        for (int i = 3; i <= n; i++)
            f[i] = f[i - 1] + k * f[i - 2];
        printf("f[%d] = %llu\n", n, f[n]);
    }
    return 0;
}

