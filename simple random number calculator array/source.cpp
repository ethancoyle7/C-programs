//This lab will be demonstrating the calculation of random numbers using 
//arrays and finding the average of numbers inputted

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

const int SIZE = 100;

int main()
{
	ofstream Outfile;
	Outfile.open("output.txt");

	srand(5); // must initialize a random number seed to 5 /// inputs 5 random
			  // numbers
	int ray[SIZE];// SIZE is 100 which is the array size
	int Values[SIZE], Sum = 0, Avg;

	//next initialize the array
	for (int i = 0; i < SIZE; i++)
		ray[i] = rand();

	//next initialize the biggest variable with ray subzero[]
	int biggest = ray[0]; // first one starts at 0
	int element;


	for (int i = 0; i < SIZE; i++)
	{
		if (ray[i] > biggest)// if sum of this array is bigger, then new big
		{
			biggest = ray[i];// new biggest
			element = i;// the biggest value is i
		}
		//next add the values of the rand together
	
		Sum += ray[i]; // each rand number added together
	}
	//Sum += SIZE; // this just does 100/100 so nt right

	// this will run through the loop every single time
	Avg = Sum / SIZE;// and print out the biggest total
	Outfile << " The biggest value is : " << biggest << '\n';
	Outfile << " the element is: " << element << '\n';
	Outfile << " The Average of these values is : " << Avg << '\n';

Outfile.close();
return 0;
}
