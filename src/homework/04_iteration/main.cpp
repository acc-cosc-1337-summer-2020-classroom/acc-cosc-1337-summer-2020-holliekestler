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
	char choice;
	string dna;
	while (choice != 'y' || choice != 'Y')
	{
		cout<<"Enter 1 to get GC content or 2 to get DNA complement. Enter 'y' or 'Y' to quit. \n";
		cin>>choice;
		if (choice != 'y' && choice != 'Y') {
			cout<<"Enter the DNA string: \n";
			cin>>dna;

		if(choice == '1')
		{
			get_gc_content(dna);
			cout<<dna;
		}
		else if(choice == '2')
		{
			get_dna_complement(dna);
			cout<<dna;
		}
		else
		{
			cout<<"Invalid response.";
		}		
		}
		  
	}
	
	return 0;
}