//This program will be computing the start time of a
//phone call and the charges related to the time spent
// of the call as well as the charge per time of day.

#include <fstream>
#include <iostream>
#include <iomanip>// used for setting decimals places in this program
#include <string>
using namespace std;

int main()
{
	ifstream DataFile;// the name of the input file
	ofstream outfile;
	DataFile.open("input.txt");
	outfile.open("output.txt");
	double Time, Charge, StartTime;// each going to have two places
	int Hours, Min,Length, count = 1;// variables initialized
	string Name;

	outfile << fixed << setprecision(2);// 2decimal places
	outfile << "Ethan Coyle\n\n";
	outfile << "Long Distance Telephone Bill\n";
	outfile << "Name          StartTime  Length    Charge " << '\n';
	outfile << "------------------------------------------\n";
	// the above sets up what will be printed out line by line
	while (count <= 25)
	{
		DataFile >> Name >> StartTime >> Length;
		//formulas now// line above reads across from file
		Hours = int(StartTime);
		Min = int((StartTime - Hours) * 100);

		// formulas are now intitalized now to start the 
		outfile << left << setw(16) << Name;

		// restrictions
		if (Hours < 10 && Min < 10)
			outfile << '0' << Hours << ":" << "0" << Min;
		else if (Hours < 10)
			outfile << '0' << Hours << ":" << Min;
		else if (Min < 10)
			outfile << Hours << ":" << '0' << Min;
		else
			outfile << Hours << ":" << Min;
			outfile << right << "  " << setw(5) << Length;
		
			outfile << right;
		if (Hours > 23 || Min > 59)
			outfile << "          ERROR";
		else if ((Hours >= 19 && Min > 0) || (Hours > 19))
		{
			Charge = Length * 0.35;
			outfile << "      $  " << setw(6)<< Charge;
		}// must add setw to all to make sure everything fits
		else if (Hours >= 7)
		{
			Charge = Length * 0.55;
			outfile <<"      $  " << setw(6)<<Charge;
		}
	
		else
		{
			Charge = Length * 0.12;
			outfile << "      $  "<< setw(6)<< Charge;
		}
		//these statements give restriction to the length
		
		outfile << '\n';
		count++;
	}
	outfile.close();
	DataFile.close();
	return 0;
}
