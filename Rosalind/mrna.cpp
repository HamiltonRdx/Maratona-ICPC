// ============================================================================
//
//       Filename:  mrna.cpp
//
//    Description:  Inferring mRNA from Protein
//                  rosalind.info/problems/mrna/
//
//        Version:  1.0
//        Created:  25/Mar/2013 16:20:44
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
    long long unsigned qtd = 3; // Já inicia com 3 por causa do stop codon
    char c;
    while ((c = getchar()) != '\n')
    {
        switch (c)
        {
            //case 'M':
            //case 'W': qtd = (qtd*1) % 1000000; break;
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'H':
            case 'K':
            case 'N':
            case 'Q':
            case 'Y': qtd = (qtd * 2) % 1000000; break;
            case 'I': qtd = (qtd * 3) % 1000000; break;
            case 'A':
            case 'G':
            case 'P':
            case 'T':
            case 'V': qtd = (qtd * 4) % 1000000; break;
            case 'L':
            case 'R':
            case 'S': qtd = (qtd * 6) % 1000000; break;
        }
    }
    printf("%llu\n", qtd);
    return 0;
}

