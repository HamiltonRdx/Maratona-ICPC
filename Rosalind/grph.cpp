// ============================================================================
//
//       Filename:  grph.cpp
//
//    Description:  Overlap Graphs
//                  rosalind.info/problems/grph/
//
//        Version:  1.0
//        Created:  21/Mar/2013 23:52:19
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <cstring>


#define MAX 500 // Quantidade máxima de nós


struct dna
{
    int nome;
    char str[10500];
    int len;

    char pre[4]; // Prefixo
    char suf[4]; // Sufixo
};


int main()
{
    char str[10500];
    dna no[MAX];

    memset(no, 0, sizeof(no));

    // Após o while, "si" terá a quantidade de strings lidas *menos uma*.
    int si = -1;
    while (gets(str) != NULL)
    {
        if (str[0] == '>')
            sscanf(str, ">Rosalind_%d", &no[++si].nome);
        else
        {
            strcpy(no[si].str + no[si].len, str); // append
            no[si].len = strlen(no[si].str);      // Atualiza tamanho
        }
    }

    // Armazena prefixos e sufixos
    for (int i = 0; i <= si; i++)
    {
        strncpy(no[i].pre, no[i].str, 3);
        strncpy(no[i].suf, no[i].str + no[i].len - 3, 3);
    }

    for (int i = 0; i <= si; i++)
        for (int j = 0; j <= si; j++)
            if (i != j)
                if (memcmp(no[i].suf, no[j].pre, 3) == 0)
                    printf("Rosalind_%04d Rosalind_%04d\n",
                            no[i].nome, no[j].nome);

    return 0;
}

