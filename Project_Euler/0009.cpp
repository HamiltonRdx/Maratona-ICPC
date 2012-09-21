// ============================================================================
// 
//       Filename:  0009.cpp
// 
//    Description:  projecteuler.net/problem=9
//                  Responder a*b*c, onde a+b+c=1000 e a^2+b^2=c^2.
//                  E sabendo que a,b e c são inteiros positivos.
//
//                  a+b+c = 1000 => c = 1000-a-b =>
//                  a^2+b^2 = c^2 = a^2+b^2+2*a*b-2000*a-2000*b+1000000 =>
//                  1000 * (a+b-500) = a*b
//
//                  Daí tiramos que:
//                      1) a < b
//                      2) 1 < a+b < 1000
//                      3) a*b é multiplo de 1000
// 
//        Version:  1.0
//        Created:  09/03/2012 10:05:48 PM
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
    int a, b, c=-1;
    for (a=1; a<1000; a++)
        for (b=a+1; a+b<1000; b++)
        {
            int ab = a*b;
            if (ab % 1000 == 0 && a+b-500 == ab/1000)
            {
                c = 1000 - a - b;
                goto fim;
            }
        }

fim:
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    cout << "a*b*c = " << a*b*c << endl;

    return 0;
}
