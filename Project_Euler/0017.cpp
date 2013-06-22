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
    int _1_9 = 36;
    int _10_19 = 70;
    int _20_99 = (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6) * 10 + (_1_9 * 8);
    int _1_99 = _1_9 + _10_19 + _20_99;
    int _100_999 = (_1_9 + 7 * 9) + (_1_9 + 10 * 9) * 99 + _1_99 * 9;
    int soma = _1_99 + _100_999 + 11;
    printf("%d\n", soma);
    return 0;
}

