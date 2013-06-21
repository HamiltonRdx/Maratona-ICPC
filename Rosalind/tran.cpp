// ============================================================================
//
//       Filename:  tran.cpp
//
//    Description:  Rosalind tran - Transitions and Transversions
//        Version:  1.0
//        Created:  08/Jun/2013 22:58:30
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;


int main()
{
    map<char, bool> tipo;
    tipo['A'] = tipo['G'] = 0; // Purine
    tipo['C'] = tipo['T'] = 1; // Pyrimidine
    char lin[1001], dna[2][1001];
    int n = -1, tam = 0;
    while (gets(lin) != NULL)
    {
        if (lin[0] == '>')
        {
            n++;
            tam = 0;
        }
        else
        {
            strcpy(dna[n] + tam, lin);
            tam += strlen(lin);
        }
    }
    int transitions = 0, transversions = 0;
    for (int i = 0; i < tam; i++)
        if (dna[0][i] != dna[1][i])
        {
            if (tipo[dna[0][i]] == tipo[dna[1][i]])
                transitions++;
            else
                transversions++;
        }
    printf("%f\n", (double)transitions / transversions);
    return 0;
}

