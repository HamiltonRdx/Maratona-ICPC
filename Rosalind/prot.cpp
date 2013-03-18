// ============================================================================
//
//       Filename:  prot.cpp
//
//    Description:  Rosalind - Translating RNA into Protein
//                  rosalind.info/problems/prot/
//
//        Version:  1.0
//        Created:  18/Mar/2013 19:49:53
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Julio Batista Silva (351202), julio(at)juliobs.com
//        Company:  UFSCar
//
// ============================================================================
#include <cstdio>
#include <string>
#include <map>
using namespace std;


int main()
{
    char rna[10001], c;
    map<string, char> ct; // Codon Table
    ct["UUU"] = 'F'; ct["UUC"] = 'F'; ct["UUA"] = 'L'; ct["UUG"] = 'L';
    ct["UCU"] = 'S'; ct["UCC"] = 'S'; ct["UCA"] = 'S'; ct["UCG"] = 'S';
    ct["UAU"] = 'Y'; ct["UAC"] = 'Y'; ct["UAA"] = 'Z'; ct["UAG"] = 'Z';
    ct["UGU"] = 'C'; ct["UGC"] = 'C'; ct["UGA"] = 'Z'; ct["UGG"] = 'W';
    ct["CUU"] = 'L'; ct["CUC"] = 'L'; ct["CUA"] = 'L'; ct["CUG"] = 'L';
    ct["CCU"] = 'P'; ct["CCC"] = 'P'; ct["CCA"] = 'P'; ct["CCG"] = 'P';
    ct["CAU"] = 'H'; ct["CAC"] = 'H'; ct["CAA"] = 'Q'; ct["CAG"] = 'Q';
    ct["CGU"] = 'R'; ct["CGC"] = 'R'; ct["CGA"] = 'R'; ct["CGG"] = 'R';
    ct["AUU"] = 'I'; ct["AUC"] = 'I'; ct["AUA"] = 'I'; ct["AUG"] = 'M';
    ct["ACU"] = 'T'; ct["ACC"] = 'T'; ct["ACA"] = 'T'; ct["ACG"] = 'T';
    ct["AAU"] = 'N'; ct["AAC"] = 'N'; ct["AAA"] = 'K'; ct["AAG"] = 'K';
    ct["AGU"] = 'S'; ct["AGC"] = 'S'; ct["AGA"] = 'R'; ct["AGG"] = 'R';
    ct["GUU"] = 'V'; ct["GUC"] = 'V'; ct["GUA"] = 'V'; ct["GUG"] = 'V';
    ct["GCU"] = 'A'; ct["GCC"] = 'A'; ct["GCA"] = 'A'; ct["GCG"] = 'A';
    ct["GAU"] = 'D'; ct["GAC"] = 'D'; ct["GAA"] = 'E'; ct["GAG"] = 'E';
    ct["GGU"] = 'G'; ct["GGC"] = 'G'; ct["GGA"] = 'G'; ct["GGG"] = 'G';

    gets(rna);
    int i = -3;
    while ((c = ct[string(rna, i+=3, 3)]) != 'Z')
        putchar(c);

    return 0;
}

