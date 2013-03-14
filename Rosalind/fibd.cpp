// ============================================================================
//
//       Filename:  fibd.cpp
//
//    Description:  Mortal Fibonacci Rabbits
//                  rosalind.info/problems/fibd/
//
//                  Dá para otimizar mais, mas assim está bem simples de
//                  entender.
//
//        Version:  1.0
//        Created:  13/Mar/2013 23:35:58
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>

int main()
{
    unsigned long long nas[101], mor[101], coe[101];
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        nas[1] = 1; mor[1] = 0; coe[1] = 1;
        nas[2] = 0; mor[2] = 0; coe[2] = 1;

        for (int i = 3; i <= n; i++)
        {
            nas[i] = coe[i-1] - nas[i-1]; // Qtd coelhos adultos = qtd nascendo
            mor[i] = i <= m ? 0 : nas[i-m]; // Se i <= m então ninguém morreu
            coe[i] = coe[i-1] + nas[i] - mor[i];
        }

        printf("%llu\n", coe[n]);
    }

    return 0;
}

