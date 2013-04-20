// ============================================================================
//
//       Filename:  hamm.cpp
//
//    Description:  Rosalind - Counting Point Mutations
//                  rosalind.info/problems/hamm/
//
//        Version:  1.0
//        Created:  16/Mar/2013 23:53:52
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
    char s1[1001], s2[1001];
    gets(s1); gets(s2);
    int tam = strlen(s1);
    int dist = 0;
    for (int i = 0; i < tam; i++)
        if (s1[i] != s2[i])
            dist++;
    printf("%d\n", dist);
    return 0;
}

