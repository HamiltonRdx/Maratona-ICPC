// ============================================================================
//
//       Filename:  0002.cpp
//
//    Description:  Project Euler 2 - Even Fibonacci numbers
//                  projecteuler.net/problem=2
//
//                  A sequência de fibonacci tem um ímpar a cada 3 termos, pois
//                  é uma repetição do seguinte:
//                      impar + impar = par
//                      impar + par = impar
//                      par + impar = impar
//
//        Version:  1.0
//        Created:  08/15/2012 08:24:20 PM
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
    int a = 1;
    int b = 1;
    int c = 2;
    int sum = 0;
    while (c <= 4000000)
    {
        sum += c;
        a = b + c;
        b = a + c;
        c = a + b;
    }
    cout << sum << endl;
    return 0;
}
