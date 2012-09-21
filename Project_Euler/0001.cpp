// ============================================================================
// 
//       Filename:  0001.cpp
// 
//    Description:  https://projecteuler.net/problem=1
//                  Find the sum of all the multiples of 3 or 5 below 1000.
// 
//        Version:  1.0
//        Created:  08/15/2012 08:02:51 PM
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
    int soma = 0;

    for (int n=3; n<1000; n++)
    {
        if (n%3 == 0 || n%5 == 0)
            soma += n;
    }

    cout << soma << endl;

    return 0;
}
