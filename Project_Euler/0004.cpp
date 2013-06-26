// ============================================================================
//
//       Filename:  0004.cpp
//
//    Description:  Project Euler 4 - Largest palindrome product
//                  projecteuler.net/problem=4
//
//        Version:  1.0
//        Created:  08/16/2012 09:43:45 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio B. Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// abc*def tem sempre 5 algarismos
bool palindromo(int n)
{
    ostringstream oss;
    oss << n;
    string s = oss.str();
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++; j--;
    }
    return true;
}

int main()
{
    int i, j, k, maior;
    for (i = 999; i >= 100; i--)
        for (j = i; j >= 100; j--)
        {
            if (palindromo(k = i * j))
            {
                if (k > maior) maior = k;
            }
        }
    cout << maior << endl;
    return 0;
}
