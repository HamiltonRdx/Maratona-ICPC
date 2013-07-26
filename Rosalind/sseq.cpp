// ============================================================================
//
//       Filename:  sseq.cpp
//
//    Description:  Rosalind sseq - Finding a Spliced Motif
//
//        Version:  1.0
//        Created:  25/Jul/2013 18:33:16
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
    char lin[1001], dna[2][1001];
    int n = -1, tam[2] = {0};

    while (gets(lin) != NULL)
    {
        if (lin[0] == '>')
        {
            n++;
            tam[n] = 0;
        }
        else
        {
            strcpy(dna[n] + tam[n], lin);
            tam[n] += strlen(lin);
        }
    }

    for (int i = 0, j = 0; i < tam[0] && j < tam[1]; i++)
        if (dna[0][i] == dna[1][j])
        {
            printf("%d ", i+1);
            j++;
        }
    putchar('\n');

    return 0;
}

