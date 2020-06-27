#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string & dna)
{
    double  gc = 0;

    for(int i = 0; i < dna.length(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            gc++;
        }
    }

    double gc_content = (gc/dna.length());
    return gc_content;

}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{
    std::string reverse;

    for(int i = dna.size() - 1; i >= 0; i--)
    {
        reverse = reverse.append(1, dna[i]);
    }

    return reverse;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

std::string get_dna_complement(std::string dna)
{
    std::string reverse_complement = get_reverse_string(dna);

    for(int i = 0; i < dna.length(); i++) {
    if(reverse_complement[i] == 'A')
    {
        reverse_complement[i] = 'T';
    }
    else if(reverse_complement[i] == 'T')
    {
        reverse_complement[i] = 'A';
    }
    else if(reverse_complement[i] == 'G')
    {
        reverse_complement[i] = 'C';
    }
    else
    {
        reverse_complement[i] = 'G';
    }
    }
    return reverse_complement;
}