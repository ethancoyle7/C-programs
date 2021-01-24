//***************************************************************************
// the intent of this program is to take 3 user inputs and then go through  *                                           
// the steps to find the quadratic equation and formula and print out each  *
// separate one in regards to the steps  of the functions                   *
//																			*
//																			*
//                                                                          *
//***************************************************************************
// To run the program the user only needs to launch the program and follow	*
// the prompts such as entering an 3 integer numbers each  followed by a    *
// space to populate the Data set matrix.					                *
//																			*
//***************************************************************************
// The current program .													*
// 																			*
//valueOfNumerator Calculates and prints the value of -+b sqrt b sqaured 
// minus 4ac                                                                *
// valueOfDenominator Calculate, print, and return the value of the denominator.
//the function printRoots Calculate and print the root or roots of the equation																	*
//***************************************************************************


#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
	const int rows = 3; // global variable for rows
	const int cols = 3; // global variable for collumns
	double descriminant;// global variable for descirminant********
	
	
	
	void MyMatrix();// prototype for my matrix inputting a b c
	void ValueofDiscriminant(int array[rows][cols]); //taking the input abc find discriminant
	void valueOfNumerator();
	void valueofDenominator();
	void printRoots();// find root prototype




	int main()
	{
		cout << "Starting out in function Main" << endl;
		MyMatrix();

		cout << "Now we are back in Main" << endl;
	}

	void MyMatrix()
	{
		cout << "Now we are in the function, MyMatrix" << endl;
		int ABCMatrix[rows][cols];

		for (int i = 0; i < rows; i++)
		{
			cout << "Please enter the numbers for a,b,c consecutively"<< 
				"with each followed by a space." << endl;
			cin >> ABCMatrix[i][0] >> ABCMatrix[i][1] >> ABCMatrix[i][2];


		}
		cout << endl;
		ValueofDiscriminant(ABCMatrix);
	}

	void ValueofDiscriminant(int array[rows][cols])
	{
		cout << "Now we are in the discriminate function" << endl;
		cout << endl;


		int discriminate(int a, int b, int c);
		{
			discriminate = (b * b) - (4 * a * c);// this is to find determinite
		}

	
	}


	void valueOfNumerator()
	{
		cout << " now we are finding the numerator" << endl;
		numerator1 << b + sqrt(discriminate);
		numerator2 << b + sqrt(discriminate);
	}


	void valueofDenominator()
	{
		cout << " now we are finding the denominator" << endl;
		denominator= 2 * a;// this is the denominator
	}


	void printRoots()
	{

		//first part will be the passed value of discrimate value passed divided by
		//the passed numerator value



		if (discriminate < 0)
			cout << "there are two complex roots: " << "-" << b  << // fir
				" +- "<< sqrt(discriminate) / 2 * a << endl; // end will be the denom passed value
		else if (discriminate == 0)
		{
			value = (-b / 2) * a;
			cout <<"There is one real root: " << value;
		}
		else
		{
			cout << "There are two real roots: " << b <<
				" +- " << sqrt(discriminate) / 2 * a << endl;
		}
	// pass this function on to the next
	}
