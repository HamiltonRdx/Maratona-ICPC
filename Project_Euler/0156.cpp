// ============================================================================
// 
//       Filename:  0156.cpp
// 
//    Description:  Project Euler 156
//                  projecteuler.net/problem=156
//
//                  Semelhante ao UVa 12241
//                  http://math.stackexchange.com/questions/47477 ajudou muito.
//
//        Version:  1.0
//        Created:  15/Oct/2012 20:12:27
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
// 
// ============================================================================
#include <cstdio>

typedef long long int LLI;

// power10[i] = 10^i
LLI power10[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000,
                 1000000000LL, 10000000000LL, 100000000000LL};


// Retorna o número de vezes que o dígito d aparece de 0 a n
inline LLI f(LLI n, int d)
{
    int k=0;
    LLI a, calda=0, vezes=0;

    while (n)
    {
        a = n%10; n /= 10;

        if (a < d)
            vezes += a * k * power10[k-1];
        else if (a == d)
            vezes += a * k * power10[k-1] + 1 + calda;
        else
            vezes += a * k * power10[k-1] + power10[k];

        calda += power10[k] * a;
        k++;
    }

    return vezes;
}


LLI busca(int d, LLI min, LLI max)
{
    LLI f_min = f(min, d);

    // Achou uma raíz
    if (min == max)
        return f_min == min ? min : 0;

    LLI f_max = f(max, d);
    // f(n,d) e n não se intersectam no intervalo n = [min, max]
    if (f_min > max || f_max < min)
        return 0;

    LLI med = min + (max - min)/2; 
    // Divide a busca em duas
    return busca(d, min, med) + busca(d, med+1, max);
}


int main()
{
    LLI soma = 0LL;
    for (int d = 1; d < 10; d++)
    {
        LLI temp = busca(d, 1LL, 100000000000LL);
        soma += temp;
        printf("busca(%d) = %lld\n", d, temp);
    }

    printf("soma = %lld\n", soma);

    return 0;
}
