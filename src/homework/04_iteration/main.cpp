//write include statements
#include<iostream>
#include<dna.h>
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	string dna;
	while (true) {
		cout<<"Enter 1 to get GC content or 2 to get DNA complement. Enter 'y' or 'Y' to quit. \n";
		cin>>choice;

		if(choice == 1)
		{
			cout<<"Enter the DNA string: \n";
			cin>>dna;
			cout<<get_gc_content(dna);			
		}
		else if(choice == 2)
		{
			cout<<"Enter the DNA string: \n";
			cin>>dna;
			cout<<get_dna_complement(dna);			
		}
		else
		{
			break;
		}
		
	}
	
	return 0;
}