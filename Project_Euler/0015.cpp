// ============================================================================
//
//       Filename:  0015.cpp
//
//    Description:  Project Euler 15 - Lattice paths
//                  projecteuler.net/problem=15
//
//                  Este é um problema de análise combinatória.
//
//                  Para atravessar uma grade NxN do canto superior esquerdo
//                  até o canto inferior direito, devemos fazer um total de 2*N
//                  movimentos: N para a direita (d) e N para baixo (b).
//
//                  Isso pode ser feito numa quantidade de vezes igual ao
//                  número de permutação com repetições da string
//                  "dddd...bbbb...", que contém N 'd's e N 'b's.
//
//                  Para N igual a 20, temos:
//                      (20,20)P40 = 40! / (20! * 20!) = 137846528820
//
//        Version:  1.0
//        Created:  11/Apr/2013 22:31:17
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
    double prod = 1.0;
    for (double num = 40.0, den = 20.0; den >= 1; num--, den--)
        prod *= num / den;
    printf("%.0f\n", prod);
    return 0;
}

