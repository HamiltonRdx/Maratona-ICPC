// ============================================================================
//
//       Filename:  0003.cpp
//
//    Description:  projecteuler.net/problem=3
//
//        Version:  1.0
//        Created:  08/16/2012 08:56:51 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================

#include <iostream>
#include <cstring>
using namespace std;

typedef long long int LLI;

int main()
{
    LLI n = 600851475143;
    LLI i = 3;      //nesse caso n já é impar
    while (n != 1)
    {
        i += 2;
        while (n % i == 0)
            n /= i;
    }
    cout << i << endl;
    return 0;
}
