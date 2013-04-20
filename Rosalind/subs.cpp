// ============================================================================
//
//       Filename:  subs.cpp
//
//    Description:  Rosalind - Finding a Motif in DNA
//                  rosalind.info/problems/subs/
//
//        Version:  1.0
//        Created:  19/Mar/2013 01:06:10
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    unsigned p = s.find(t);
    while (p != (unsigned) - 1)
    {
        cout << p + 1 << " ";
        p = s.find(t, p + 1);
    }
    return 0;
}

