// In this program we will be creating recipe guidlines for
// the ammount of ingredients needed based on the ammount of cookies

#include<iostream>
#include<fstream>
#include<iomanip>// must included to use setprecision

using namespace std;

int main()

{
	int Number = 1, Cookies = 48;// start the count at 1
	
	const double Sugar = 1.5, Oats = 0.75,
		Butter = 1, Flour = 2.75, Chocolate_Chips = 1.25,
		Cinnamon = 0.1, Milk = 0.5;
		
	// constant variable values that can be used to calculate for
	// different ammount of cookies


	double NumCookies, Factor, TotSugar, TotOats, TotButter, TotFlour,
		TotChocolate, TotCinn, TotMilk;
	// these are going to be the total ammount value for each recipe

	ifstream infile;
	infile.open("input.txt");
	ofstream outfile;
	outfile.open("output.txt");
	outfile << fixed << setprecision(2);
	outfile << " Ethan Coyle Program 1 \n\n";

	while (Number <= 10)// will count to 10 at the most and then
	{					// stop
		cout << " How many cookies do you want to make?\n";
		cin >> NumCookies;// input # of cookies

		// below is the formulas used to calculate how much
		// based upon the number of cookies want to make
		Factor = NumCookies / Cookies;
		// this condenses the repetitiveness of each equation
		TotSugar = Sugar * Factor;
		TotOats = Oats * Factor;
		TotButter = Butter * Factor;
		TotFlour = Flour * Factor;
		TotChocolate = Chocolate_Chips * Factor;
		TotCinn = Cinnamon * Factor;
		TotMilk = Milk * Factor;

		// bleow prints out the listed in order line by line
		// starting with requested cookies and ingredients required
		outfile << "For " << NumCookies << " Cookies, use this recipe \n\n";
		outfile <<setw(6)<< TotSugar << "\t  Cups of Sugar\n";
		outfile<< setw(6) << TotOats << "\t  Cups of Oats \n";
		outfile << setw(6) << TotButter << "\t  Cups of Butter \n";
		outfile << setw(6) << TotFlour << "\t  Cups of flour \n";
		outfile << setw(6) << TotChocolate << "\t  Cups of Chocolate Chips" 
			<< "\n";
		outfile << setw(6) << TotCinn << "\t  Cups of Cinnamon \n";
		outfile << setw(6) << TotMilk << "\t  Cups of Milk \n";
		outfile << " \n\n";

		Number= Number + 1;// increment the counter by one go back to top

	}
	infile.close();
	outfile.close();

	return 0;
}
