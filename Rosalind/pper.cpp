// ============================================================================
//
//       Filename:  pper.cpp
//
//    Description:  Rosalind pper - Partial Permutations
//
//        Version:  1.0
//        Created:  05/Jun/2013 23:15:12
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
    int n, k, p = 1;
    scanf("%d %d", &n, &k);

    for (int i = n; i > (n - k); i--)
        p = (p * i) % 1000000; // Não dá overflow, pois o máximo é 1000000*100

    printf("%d\n", p);

    return 0;
}

