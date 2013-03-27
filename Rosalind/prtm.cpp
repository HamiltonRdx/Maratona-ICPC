// ============================================================================
//
//       Filename:  prtm.cpp
//
//    Description:  Calculating Protein Mass
//                  rosalind.info/problems/prtm/
//
//        Version:  1.0
//        Created:  26/Mar/2013 20:47:25
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <map>


int main()
{
    std::map<char, double> m;
    m['A'] = 71.03711;
    m['C'] = 103.00919;
    m['D'] = 115.02694;
    m['E'] = 129.04259;
    m['F'] = 147.06841;
    m['G'] = 57.02146;
    m['H'] = 137.05891;
    m['I'] = 113.08406;
    m['K'] = 128.09496;
    m['L'] = 113.08406;
    m['M'] = 131.04049;
    m['N'] = 114.04293;
    m['P'] = 97.05276;
    m['Q'] = 128.05858;
    m['R'] = 156.10111;
    m['S'] = 87.03203;
    m['T'] = 101.04768;
    m['V'] = 99.06841;
    m['W'] = 186.07931;
    m['Y'] = 163.06333;

    char pstr[1002], *ptr;
    fgets(pstr, 1002, stdin);

    ptr = pstr;
    double massa = 0.0;
    while (*ptr != '\n')
    {
        massa += m[*ptr];
        ptr++;
    }

    printf("%.3f\n", massa);

    return 0;
}

