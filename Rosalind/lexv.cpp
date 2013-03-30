// ============================================================================
//
//       Filename:  lexv.cpp
//
//    Description:  Rosalind - Ordering Strings of Varying Length Lexicographically
//                  rosalind.info/problems/lexv/
//
//        Version:  1.0
//        Created:  30/Mar/2013 15:22:03
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
int n;          // Tamanho máximo de cada string a ser impressa


// len = strlen(s)
void combina(int len)
{
    if (len != n)
    {
        for (int i = 0; i < qtd; i++)
        {
            s[len] = a[i];
            s[len + 1] = '\0';
            puts(s);
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

