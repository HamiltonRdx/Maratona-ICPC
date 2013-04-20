// ============================================================================
//
//       Filename:  gc.cpp
//
//    Description:  Computing GC Content
//                  rosalind.info/problems/gc/
//
//        Version:  1.0
//        Created:  14/Mar/2013 17:41:06
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <cstring>


char linha[1001];
int nome, maior_nome;
int i = 0, maior_i = 0;
int tam, bps = 0, gc = 0;
double gc_content, maior_content = -1.0;


void calcula()
{
    gc_content = (double)gc / bps;
    if (gc_content > maior_content)
    {
        maior_content = gc_content;
        maior_i = i;
        maior_nome = nome;
    }
}


int main()
{
    while (gets(linha) != NULL)
    {
        if (linha[0] == '>')
        {
            if (i++) calcula();
            sscanf(linha + 10, "%d", &nome);
            bps = gc = 0;
        }
        else
        {
            tam = strlen(linha);
            bps += tam;
            for (int j = 0; j < tam; j++)
                if (linha[j] == 'G' || linha[j] == 'C')
                    gc++;
        }
    }
    calcula(); // Calcula gc_content do último input
    printf("Rosalind_%04d\n%.6f\n", maior_nome, 100 * maior_content);
    return 0;
}

