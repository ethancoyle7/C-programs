//****************************************************************************
//							 Assignment #4									 *
//							 Name: Ethan Coyle								 *
//			       Data Structures and ADT  Dr. Colmeneras					 *
//						       11/6/20n                    				     *
//																			 *
//****************************************************************************
/****************************************************************************
 *This program creates a Matrix  by creating a 2 dimin. array to holds rows *
 *and collums and accessed the  dynamically allocated memory				*
 *to allow the user to set the dimens. of our								*
 *Matrix. This matrix is then passed along to a function that is used to	*
 *determine and keep a running total of the ammount of resisdents in T\		*
 *inyVille  and the number of men or women but determining the divisibility *
 *of those randomly generated numbers and checking to see which one is a	*
 *womans(divisibe by 2 or a mans social security number. The user is		*
 *prompted to ask how many rows and how many collumns to fill up with		*
 *randomly generated numbers and then the program runs through those		* 
 *numbers to  assess the various parts of the program						*
 *																			*
****************************************************************************/

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

void SSNsummary(int** array, int R, int C);// function prototype
void GenderSummary(int** array, int R, int C);//funct prototype


int main()
{
	int Rows, Collumns;

	// Variables for setting a range for our random values
	int MinimumValue = 1000;
	int MaximumValue = 5999;// set the range for max value 
	// so the min value it can be is 1000 and the largest random gen
	//number will be 5999 nothiing higher or lower

	cout << "We will now set up our matrix for our numbers\n";
	cout << "How many rows are you creating.\n";
	cin >> Rows;
	cout << "how many collumns for your matrix?.\n";
	cin >> Collumns;
	//take loan from the heap and create new rows and collums to point to
	int** Matrix = new int*[Rows];// double pointer matrix that creates new
								   // rows with pointer pointing to it
							// Dynamiclly allucate memory of size for each row
	for (int i = 0; i < Rows; i++)
	{
		Matrix[i] = new int[Rows];// loan from the heap for new row
	}
  
	for (int j = 0; j < Collumns; j++)
	{
		Matrix[j] = new int[Collumns];// take loan from the heap for new col
	}

	// allocate memory dinamically for size of our columns
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Collumns; j++)
		{
			// setting our rand function to fill the matrix with numbers
			//in the desired range
			int number = rand() % (MaximumValue - MinimumValue + 1) +
				MinimumValue;//set each  number to random number to evaluate 
			Matrix[i][j] = number; // for each and fill these into the row/col
		}
	}

	cout << "The matrix is below.\n";
	// Displaying the randomly generated matrix.
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Collumns; j++)
		{
			cout << Matrix[i][j] << " ";// display rnadom numbers in the row
		}								 // and collusm
		cout << endl;
	}
	cout << endl;
	cout << endl;

	SSNsummary(Matrix, Rows, Collumns);// function call
	GenderSummary(Matrix, Rows, Collumns);// function call

	
	delete[] Matrix;// we must release our dynamic memory in order to
					// prevent memeory leaks took loan out now give back
	system("pause");
	return 0;
}

/*****************************************************************************
	Function Name:		void SSNsummary(int **array, int R, int C)			 *
	
	Parameters:			int **array, int R(for forws, int C	(for collums)	 *
																			 *
	What this function does-This function receives the pointer array with    *
			the dynamically allocated memory and variables that are			 *
			require to read Matrix. Values are declared for acummulation	 *
			totals of each SSN # type as well as for a Tot of Soc securit	 *
			#'s. then it displays out to the viewer a readable format		 *
																			 *
	return type; returns void so just displays								 *
*****************************************************************************/

void SSNsummary(int **array, int R, int C)
{
	cout << " Now in SSN Summary function.\n\n";
	int Tot = R * C;
	//initialize all these to 0 first then accumulate how many occurances
	int SSN1 = 0;
	int SSN2 = 0;
	int SSN3 = 0;
	int SSN4 = 0;
	int SSN5 = 0;

	for (int i = 0; i < R; i++)// or each row to collumns go get accumulator
	{
		for (int j = 0; j < C; j++)
		{
			if (array[i][j] > 999 && array[i][j] < 2000)
			{// if soc security num falls into 999 to 2000 category
				SSN1++;// add one
			}

			if (array[i][j] > 1999 && array[i][j] < 3000)
			{// if soc security num falls into 1999 to 3000 category
				SSN2++;// add one
			}

			if (array[i][j] > 2999 && array[i][j] < 4000)
			{
				SSN3++;//if soc security num falls into 2999 to 4000 category
			}// add one

			if (array[i][j] > 3999 && array[i][j] < 5000)
			{
				SSN4++;// if soc security num falls into 3999 to 5000 category
			}//add one

			if (array[i][j] > 4999 && array[i][j] < 6000)
			{
				SSN5++;// if soc security num falls into 4999 to 6000 category
			}// add one
		}
	}// accumulate any number in the specific field each time it occurs

	cout << "The following summarizes the SSN#'s of Tiny Ville:\n";
	cout << "SSN:   1000's = " << SSN1 << endl;//display all accumulated
	cout << "SSN:   2000's = " << SSN2 << endl;
	cout << "SSN:   3000's = " << SSN3 << endl;
	cout << "SSN:   4000's = " << SSN4 << endl;
	cout << "SSN:   5000's = " << SSN5 << endl;
	cout << "The Total # of inhabitants in Tiny Ville is: " << Tot << endl;
	cout << endl;
	cout << endl;
}//end of function no return type

/*****************************************************************************
	Function Name:		void GenderSummary(int** array, int R, int C)		 *
	
	Paramters:			int **array, int R(for forws, int C	(for collums)	 *
	
	what it does-															 *
	This function receives the pointer array with the dynamically allocated  *
	memory and variables require to read matrix. This also will keep a		 *
	running total of each type of gender and the social security nums		 *
	associated with those as well and then display to the user				 *

	return type?- there is no return type just displaying to the usr
*****************************************************************************/

void GenderSummary(int** array, int R, int C)
{
	cout << "Now in the Gender Summary Function.\n\n";

	int men = 0;// initialize number to 0
	int women = 0;//initialize women to 0
	int Tot = R * C;// total is the random numbers generated by row by col
					// there will be total residents multiplying col by rows
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (array[i][j] % 2 == 0) // If the number turns out to be even
			{						  // with no remainder
				women++;// add to women count
			}

			else // if it is not even, then add to men count
				men++;
		}
	}
	// display the calculated ammounts are displayes
	
	
	cout << "The following summarizes the Genders in Tiny-Ville\n";
	cout << "The Total # of residents in Tiny-Ville is: " << Tot << endl;
	cout << "Tiny-Ville has a Total of " << women << " Females.\n";
	cout << "Tiny-Ville has a Total of " << men << " Males\n";
}
