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
	do
	{
		cout<<"Enter 1 to get GC content or 2 to get DNA complement. Enter 'q' to quit. \n";
		cin>>choice;
		cout<<"Enter the DNA string: \n";
		cin>>dna;

		if(choice == 1)
		{
			get_gc_content(dna);
			cout<<dna;
		}
		else if(choice == 2)
		{
			get_dna_complement(dna);
			cout<<dna;
		}
		else
		{
			cout<<"Invalid response.";
		}
		
	} while (choice != 'q');
	
	return 0;
}