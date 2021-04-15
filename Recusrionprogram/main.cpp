//****************************************************************************
//			Assignment 5 Recursion											 *
//			Name: Ethan Coyle											     *
//			Data Structures: 11/14/2020								         *
//																			 *
//****************************************************************************
/*****************************************************************************
  This program reinforces the use of recursion in functions. Each function	 *
  will produce the desired outcome by recursively calling itself and either  *
  returning a result or displaying the results each time it is called.		 *
  The first function will add up the sum of all odd numbers between 1 and    *
  the number the user enters. The second function will ask the user for a    *
  pair of numbers, one for a base, and one for a power, and the function     *
  will produce the result of the base/power combination and then recursively *
  call itself as the power is decreased until it is no longer greater than   *
  zero. Finally, the last function will produce the result of product of all *
  even numbers between 1 and the number entered by the user.				 *
*****************************************************************************/

#include<iostream>
#include<cmath>

using namespace std;

int Summation(unsigned long int Number);
void BaseExponent(unsigned long int B, unsigned long int P);




int main()
{
	unsigned long int Number, Base, Power;


	cout << "WE are going to start with recursive summation" <<
		" please enter an integer number.\n";
	cin >> Number;

	cout << "The Summation of all the odd Numbers between 1 and " << Number
		<< "  are :: " << Summation(Number) << endl << endl;// call the 1st
	//number then  call the recursive function
	cout << "We are now moving on to our base function:: please enter " <<
		"the base number" << '\n';
	cin >> Base;
	cout << " now please enter the power of this base" << endl;
	cin >> Power;
	cout << endl << endl;
	BaseExponent(Base, Power);// function call for base to power recursive
	cout << "\n\n";
	system("pause");
	return 0;
}


/******************************************************************************
	Function Name: BaseExponent												  *
	Paramters: int B, int P, int CalculatedTotal										  *
																			  *
	This function receives two integers, one representing a base and the	  *
	other for a power. The function will show the result of rasing the base   *
	by the power and then the function will recursively call itself as it     *
	decreases the power until the power is no longer greater than zero.		  *
*******************************************************************************/

void BaseExponent(unsigned long int B, unsigned long int P)
{
	int CalculatedTotal = 0;// initialize set to 0 to do math
	CalculatedTotal = pow(B, P);// accepts the base and power
	if (P > 0)// as long as the power is greater than 0
	{
		cout <<" Base number:   "<<  B << "    to the power of  " << P <<
			"   =     " << CalculatedTotal << endl;
		BaseExponent(B, P - 1);// recursively till condition is false
	}

}

/******************************************************************************
	Function Name: Summation												  *
	Paramters: int Number, static int Oddnum										  *
																			  *
	This function receives an integer and the function will recursively		  *
	call itself until the number is no longer = to zero. While this is taking *
	place a running total is kept of the summation of the odd numbers between *
	1 and the number received from the main function. Once this has completed *
	the value is returned and displayed.									  *
*******************************************************************************/

int Summation(unsigned long int Number)
{
	static int Oddnum = 0;

	if (Number > 0)// as long as the number isnt 0
	{
		if (Number % 2 == 0) // Bypassing even numbers
		{
			Summation(Number - 1);
		}

		else // Condition for odd mumbers
		{
			Oddnum += Number;//add each odd number for running total
			Summation(Number - 1);
		}
	}
	return Oddnum;
}
