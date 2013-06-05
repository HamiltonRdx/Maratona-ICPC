// ============================================================================
//
//       Filename:  prob.cpp
//
//    Description:  Rosalind - Introduction to Random Strings
//                  rosalind.info/problems/prob/
//
//        Version:  1.0
//        Created:  04/Jun/2013 22:49:35
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <cstring>
#include <cmath>


int main()
{
    char s[150];
    int at = 0, gc = 0, tam = strlen(gets(s));

    for (int i = 0; i < tam; i++)
        if (s[i] == 'A' || s[i] == 'T')
            at++;
        else
            gc++;
    
    double a;
    while (scanf("%lf", &a) != EOF)
        printf("%.3f ", log10(pow(a/2, gc) * pow((1.0 - a)/2, at)));

    return 0;
}

