// ============================================================================
//
//       Filename:  perm.cpp
//
//    Description:  Rosalind - Enumerating Gene Orders
//                  rosalind.info/problems/perm/
//
//        Version:  1.0
//        Created:  23/Mar/2013 21:39:10
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>

void imprime(char *s, int n)
{
    putchar(s[0]);
    for (int i = 1; i <= n; i++)
        printf(" %c", s[i]);
    putchar('\n');
}


void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}


// i - índice do início da string s; f - índice do fim da string s
void permuta(char *s, int i, int n)
{
    if (i == n)
        imprime(s, n);
    else
    {
        for (int j = i; j <= n; j++)
        {
            swap(s+i, s+j);
            permuta(s, i+1, n);
            swap(s+i, s+j);
        }
    }
}


int main()
{
    // A quantidade de permutações é n!
    int fat[] = {1, 1, 2, 6, 24, 120, 720, 5040};
    int n;

    scanf("%d", &n);
    printf("%d\n", fat[n]);

    char str[8];
    // Constrói a primeira permutação
    for (int i = 0; i < n; i++)
        str[i] = (char)(i + 1) + '0';
    str[n] = '\0';

    permuta(str, 0, n-1);

    return 0;
}

