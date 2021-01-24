// In this program, i will be inputting in a dollar and cent change ammount 
// into a change counter for that ammount

# include < iostream>
#include <fstream>
#include<iomanip>// must be used for setw and setprecision

using namespace std;

int main()
{
	double Total;
	int Ammount, Dollars, Quarters, Half_Dollars,
		Dimes, Nickles, Pennies, count =1;


	ofstream outfile;
	outfile.open("output.txt");
	outfile << " Ethan Coyle Program 2: Creating Change\n\n";

	
	while (count <=11)// will count to 11
	{
		cout<< "Please, enter the Total and i will convert for you.\n";
		cin >> Total;
		Ammount = Total * 1000/10;// this is so modulo can be used
							// bc does not work with double and int
							// must be both integers
		Dollars = Ammount / 100;
			Ammount = Ammount % 100;// give remainder after finding dollar amt

		Half_Dollars = Ammount / 50;
			Ammount = Ammount % 50;// give remainder for half dollars

		Quarters = Ammount / 25; // find the remainder from the dollars
			Ammount = Ammount % 25;

		//find number of dimes from the remainder
		Dimes = Ammount / 10;
			Ammount = Ammount % 10;

		//find number of nickles from the remainder
		Nickles = Ammount / 5;
			Ammount = Ammount % 5;

		//find number of pennies from the remainder whatever is left
		Pennies = Ammount;


		count++;// integrate count by 1 

	outfile << " Total Ammount is $   " <<fixed << setprecision(2) <<
		Total << "\n";
	outfile << "        Dollar Bills      " <<  setw(6) << Dollars << '\n';
	outfile << "        Half Dollars      " << setw(6) << Half_Dollars <<
		'\n';
	outfile << "        Quarters          " << setw(6) << Quarters << '\n';
	outfile << "        Dimes             " << setw(6) << Dimes << '\n';
	outfile << "        Nickles           " << setw(6) << Nickles << '\n';
	outfile << "        Pennies           " << setw(6) << Pennies << '\n';
	outfile << "\n\n";
	}
	

	outfile.close();
	//system("pause");
	return 0;
}
