// ============================================================================
//
//       Filename:  iev.cpp
//
//    Description:  Calculating Expected Offspring
//                  rosalind.info/problems/iev/
//
//        Version:  1.0
//        Created:  22/Mar/2013 12:43:03
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
    int c[6];
    scanf("%d %d %d %d %d %d", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5]);

    double exp = 1.00 * c[0] +  // AA-AA
                 1.00 * c[1] +  // AA-Aa
                 1.00 * c[2] +  // AA-aa
                 0.75 * c[3] +  // Aa-Aa
                 0.50 * c[4] +  // Aa-aa
                 0.00 * c[5];   // aa-aa

    printf("%.1f\n", 2.0*exp);

    return 0;
}

