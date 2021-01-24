// this program will be reading from an input file
// and counting up the reoccurances of letters from a string

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	ofstream outfile;
	ifstream Infile;
	outfile.open("output.txt");
	Infile.open("Input.txt");

	char Letter;// infile reads the letters as characters
	int NumA = 0, NumB = 0, NumC = 0, NumD = 0, NumE = 0, NumF = 0, NumG = 0,
		NumH = 0, NumI = 0, NumJ = 0, Other = 0,Line, count;
	//Line and count are initiliazed in the for loop as 1 each
	outfile << " Student Name : Ethan Coyle Program 5\n";
	//Infile >> Letter;
	
	for(Line=1; Line<=12; Line++)
	{	// line is 1 goes through loop increment by 1 each time all the way to line 25

		for(count=1; count<=25;count++)
		{// count is 1; count goes up to 25 check; count incremented by 1(update)
			
			
			
		Infile >> Letter;// read first letter
			
			switch (Letter)// letter is the selection every occurance
			{
				case 'A': case 'a':// if either A or a add 1 each time
					++NumA;
					break;
				case 'B': case'b':// if either B or b add 1 each time
					++NumB;
					break;
				case 'C': case 'c':// if either C or c add 1 each time
					++NumC;
					break;
				case 'D': case 'd':// if either D or d add 1 each time
					++NumD;
					break;
				case 'E': case'e':// if either E or e add 1 each time
					++NumE;
					break;
				case 'F': case 'f':// if either F or f add 1 each time
					++NumF;
					break;
				case 'G': case 'g':// if either G or g add 1 each time
					++NumG;
					break;
				case 'H': case'h':// if either H or h add 1 each time
					++NumH;
					break;
				case 'I': case 'i':
					++NumI;
					break;
				case 'J': case 'j':
					++NumJ;
					break;
				default:
					++Other;
					//no break needed here for default
			}
			
			//the above switch runs through each charater it counts and adds one
			// to each occurance
		}	// of a-j and all else is anything past is counted as other
	
	//, format output first, then reset then update to line 2 with for loop
		outfile << "_______________________________________________" << '\n';
		outfile << "Line: "<< Line<< '\n';
		outfile << " A  B   C   D   E   F   G   H   I   J   Other  " << '\n';
		outfile <<left << setw(4) << NumA << setw(4) << NumB << setw(4) <<
			NumC << setw(4) << NumD << setw(4) << NumE << setw(4) << NumF <<
			setw(4) << NumG << setw(4) << NumH << setw(4) << NumI <<
			setw(4) << NumJ << right << setw(4) << Other << '\n';
		outfile << "_______________________________________________" << '\n' <<
			'\n';
	
		NumA = 0, NumB = 0, NumC = 0, NumD = 0, NumE = 0, NumF = 0,// 
			NumG = 0, NumH = 0, NumI = 0, NumJ = 0, Other = 0, count= 1;
	// set back to 0 before jumping back to the top of the loop	
	}

outfile.close();
Infile.close();
//system("pause");
return 0;

}
