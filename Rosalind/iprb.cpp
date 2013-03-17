// ============================================================================
//
//       Filename:  iprb.cpp
//
//    Description:  Mendel's First Law
//                  rosalind.info/problems/iprb/
//
//        Version:  1.0
//        Created:  17/Mar/2013 01:27:08
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
    double k, m, n, sum, prob;
    scanf("%lf %lf %lf", &k, &m, &n);

    sum = k + m + n;

    prob = 1.00 * k/sum * (k-1)/(sum-1) +   // K x K
           1.00 * k/sum * m/(sum-1) +       // K x M
           1.00 * k/sum * n/(sum-1) +       // K x N
           1.00 * m/sum * k/(sum-1) +       // M x K
           0.75 * m/sum * (m-1)/(sum-1) +   // M x M
           0.50 * m/sum * n/(sum-1) +       // M x N
           1.00 * n/sum * k/(sum-1) +       // N x K
           0.50 * n/sum * m/(sum-1) +       // N x M
           0.00 * n/sum * (n-1)/(sum-1);    // N x N

    printf("%f\n", prob);

    return 0;
}

