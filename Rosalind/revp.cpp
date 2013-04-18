// ============================================================================
//
//       Filename:  revp.cpp
//
//    Description:  Rosalind - The Billion-Year War
//                  rosalind.info/problems/revp/
//
//                  Acredito que exista um algoritmo otimizado para este
//                  problema, porém meu código roda em apenas 0.5ms sobre um
//                  input de 1000 caracteres e em 95ms com 300000 caracteres.
//
//        Version:  1.0
//        Created:  17/Apr/2013 21:35:55
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
#include "../benchmark.h"

using namespace std;


#define MAX 1001 // Tamanho máximo do input
map<char, char> comp;


bool eh_palindromo(char *s, int len)
{
    int i = 0, j = len-1;
    while (i < j)
    {
        if (s[i] != comp[s[j]])
            break;
        i++;
        j--;
    }

    return (i > j);
}


int main()
{
    timespec t1, t2;
    clock_gettime(CLOCK_REALTIME, &t1);

    // Complementos
    comp['A'] = 'T'; comp['T'] = 'A'; comp['C'] = 'G'; comp['G'] = 'C';

    char lin[MAX], dna[MAX];
    int tam=0;

    gets(lin); // ">Rosalind_xx"
    while (gets(lin) != NULL)
    {
        strcpy(dna + tam, lin);
        tam += strlen(lin);
    }
    *(dna+tam) = '\0';

    //printf("\'%s\'\n", dna);

    // len += 2, pois não existe reverse palindrome de comprimento ímpar
    for (int i = 0; i < tam - 3; i++)
        for (int len = 4; len <= 12 && i+len <= tam; len += 2)
            if (eh_palindromo(dna+i, len))
                printf("%d %d\n", i+1, len);

    clock_gettime(CLOCK_REALTIME, &t2);
    printf("Tempo: %lds:%09ldns\n", diff(t1,t2).tv_sec, diff(t1,t2).tv_nsec);

    return 0;
}

