// ============================================================================
//
//       Filename:  rna.cpp
//
//    Description:  RNA Transcription
//                  rosalind.info/problems/rna/
//
//        Version:  1.0
//        Created:  28/Oct/2012 16:53:02
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
    char dna[1001], *ptr;
    gets(dna);
    ptr = dna;
    while (*ptr != '\0')
    {
        putchar(*ptr == 'T' ? 'U' : *ptr);
        ptr++;
    }
    return 0;
}
