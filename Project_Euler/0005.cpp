// ============================================================================
// 
//       Filename:  0005.cpp
// 
//    Description:  projecteuler.net/problem=5
//                  Menor natural divisível por todos os números de 1 a 20
// 
//        Version:  1.0
//        Created:  08/24/2012 04:07:03 AM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
// 
// ============================================================================

#include <iostream>
using namespace std;

typedef unsigned long long int ULLI;

ULLI mdc(ULLI a, ULLI b)
{
    ULLI resto = 1;
    while (resto != 0)
    {
        resto = a%b;
        a = b;
        b = resto;
    }

    return a;
}

ULLI mmc(ULLI a, ULLI b)
{
    return a*b/mdc(a,b);
}

int main()
{
    ULLI mmc_atual = 1;
    for (int i=2; i<=20; i++)
    {
        cout << mmc_atual << endl;
        mmc_atual = mmc(mmc_atual, i);
    }

    cout << mmc_atual << endl;

    return 0;
}
