// ============================================================================
//
//       Filename:  revc.cpp
//
//    Description:  Complementing a Strand of DNA
//                  rosalind.info/problems/revc/
//
//        Version:  1.0
//        Created:  13/Mar/2013 21:31:13
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <cstring>

int main()
{
    char dna[1002];
    int tam = strlen(gets(dna));

    for (int i = tam-1; i >= 0; i--)
    {
        switch(dna[i])
        {
            case 'A':
                putchar('T'); break;
            case 'T':
                putchar('A'); break;
            case 'C':
                putchar('G'); break;
            case 'G':
                putchar('C'); break;
        }
    }
    putchar('\n');

    return 0;
}

