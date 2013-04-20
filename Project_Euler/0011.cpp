// ============================================================================
//
//       Filename:  0011.cpp
//
//    Description:  Project Euler 11 - Largest product in a grid
//                  projecteuler.net/problem=11
//
//        Version:  1.0
//        Created:  04/Apr/2013 11:35:08
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>


int main()
{
    int m[26][26], p, maior = 0;
    // Bordas evitam algumas verificações dos limites da matriz
    for (int i = 0; i < 26; i++)
        m[i][0] = m[i][1] = m[i][2] = m[i][23] = m[i][24] = m[i][25] = 0;
    for (int j = 3; j < 23; j++)
        m[0][j] = m[1][j] = m[2][j] = m[23][j] = m[24][j] = m[25][j] = 0;
    // Matriz
    for (int i = 3; i < 23; i++)
        for (int j = 3; j < 23; j++)
            scanf("%d", &m[i][j]);
    // Horizontal
    for (int i = 3; i < 23; i++)
        for (int j = 0; j < 23; j++)
        {
            p = m[i][j] * m[i][j + 1] * m[i][j + 2] * m[i][j + 3];
            if (p > maior) maior = p;
        }
    // Vertical
    for (int i = 0; i < 23; i++)
        for (int j = 3; j < 23; j++)
        {
            p = m[i][j] * m[i + 1][j] * m[i + 2][j] * m[i + 3][j];
            if (p > maior) maior = p;
        }
    // Diagonal E-D '\'
    for (int i = 0; i < 23; i++)
        for (int j = 0; j < 23; j++)
        {
            p = m[i][j] * m[i + 1][j + 1] * m[i + 2][j + 2] * m[i + 3][j + 3];
            if (p > maior) maior = p;
        }
    // Diagonal D-E '/'
    for (int i = 0; i < 23; i++)
        for (int j = 3; j < 26; j++)
        {
            p = m[i][j] * m[i + 1][j - 1] * m[i + 2][j - 2] * m[i + 3][j - 3];
            if (p > maior) maior = p;
        }
    printf("%d\n", maior);
    /* Debug
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
            printf("%3d", m[i][j]);
        putchar('\n');
    }
    */
    return 0;
}

