// ============================================================================
//
//       Filename:  0006.cpp
//
//    Description:  Project Euler 6 - Sum square difference
//                  projecteuler.net/problem=6
//
//        Version:  1.0
//        Created:  08/24/2012 06:46:12 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <iostream>
using namespace std;

int main()
{
    int soma = 101 * 50;    // Soma de PA
    int soma2 = soma * soma;
    int soma_quadrados;
    for (int i = 1; i <= 100; i++)
        soma_quadrados += i * i;
    cout << soma2 - soma_quadrados << endl;
    return 0;
}
