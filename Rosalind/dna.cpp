// ============================================================================
//
//       Filename:  dna.cpp
//
//    Description:  Counting Nucleotides
//                  rosalind.info/problems/dna/
//
//        Version:  1.0
//        Created:  28/Oct/2012 16:29:09
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>

int main()
{
    int a, c, g, t;
    char ch;
    a = c = g = t = 0;
    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
            case 'A': a++; break;
            case 'C': c++; break;
            case 'G': g++; break;
            case 'T': t++; break;
        }
    }
    printf("%d %d %d %d\n", a, c, g, t);
    return 0;
}
