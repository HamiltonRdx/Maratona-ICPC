// ============================================================================
//
//       Filename:  cons.cpp
//
//    Description:  Rosalind - Consensus and Profile
//                  rosalind.info/problems/cons/
//
//        Version:  1.0
//        Created:  20/Mar/2013 02:25:24
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <cstring>


char dna[1001], letra[] = {'A', 'C', 'G', 'T'};
int prof[4][1001], tam;


void profila()
{
    int i = 0;
    for (char *ptr = dna; *ptr != '\0'; ptr++)
    {
        switch (*ptr)
        {
            case 'A':
                prof[0][i++]++; break;
            case 'C':
                prof[1][i++]++; break;
            case 'G':
                prof[2][i++]++; break;
            case 'T':
                prof[3][i++]++; break;
        }
    }

    tam = i;
}


char max_prof(int j)
{
    int max = -1, max_idx = -1;
    for (int i = 0; i < 4; i++)
        if (prof[i][j] > max)
        {
            max = prof[i][j];
            max_idx = i;
        }

    return letra[max_idx];
}


int main()
{
    memset(prof, 0, sizeof(prof));

    char lixo[100];
    while (gets(lixo) != NULL)
    {
        scanf("%[^>]", dna); // melhor que ler cada caractere separadamente
        profila();
    }

    // Imprime o Consensus
    for (int j = 0; j < tam; j++)
        printf("%c", max_prof(j));
 
    // Imprime a Profile Matrix
    for (int i = 0; i < 4; i++)
    {
        printf("\n%c:", letra[i]);
        for (int j = 0; j < tam; j++)
            printf(" %d", prof[i][j]);
    }

    return 0;
}

