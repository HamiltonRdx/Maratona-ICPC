// ============================================================================
//
//       Filename:  0017.cpp
//
//    Description:  Project Euler 17 - Number letter counts
//                  projecteuler.net/problem=17
//
//        Version:  1.0
//        Created:  21/Jun/2013 20:10:30
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
    // Números de 1 a 9. Contei as letras nos dedos
    int _1_9 = 36;
    // Números de 10 a 19. Contei as letras nos dedos
    int _10_19 = 70;
    // 8 dezenas 20s 30s 40s 50s 60s 70s 80s 90s aparecem 10 vezes cada
    int _20_99 = (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6) * 10 + (_1_9 * 8);
    // Soma de tudo calculado até agora
    int _1_99 = _1_9 + _10_19 + _20_99;
    int _100_999 = (_1_9 + 7 * 9) +       // hundred tem 7 letras e aparece 9x
                   (_1_9 + 10 * 9) * 99 + // hundredand tem 10 letras
                   _1_99 * 9;             // [1,99] aparece 1x em cada centena
    int soma = _1_99 + _100_999 + 11;     // onethousand tem 11 letras
    printf("%d\n", soma);
    return 0;
}

