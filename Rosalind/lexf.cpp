// ============================================================================
//
//       Filename:  lexf.cpp
//
//    Description:  Rosalind - Enumerating k-mers Lexicographically
//                  rosalind.info/problems/lexf/
//
//                  Árvore correspondente ao exemplo:
//                                             Raíz
//                                /         /        \           \            |
//                              T          A          G           C           |
//                           / / \ \    / / \ \    / / \ \     / / \ \        |
//                           T A G C    T A G C    T A G C     T A G C        |
//
//        Version:  1.0
//        Created:  28/Mar/2013 22:02:25
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>


char a[50];     // Alfabeto
char s[50];     // String a ser impressa
int qtd = 0;    // Quantidade de caracteres no alfabeto
int n;          // Tamanho de cada string a ser impressa


// len = strlen(s)
void combina(int len)
{
    if (len == n)
        puts(s);
    else
    {
        for (int i = 0; i < qtd; i++)
        {
            s[len] = a[i];
            s[len + 1] = '\0';
            combina(len+1);
            s[len] = '\0'; // backtrack
        }
    }
}


int main()
{
    char c;
    while ((c = getchar()) != '\n')
        if (c != ' ')
            a[qtd++] = c;

    scanf("%d", &n);
    combina(0);

    return 0;
}

