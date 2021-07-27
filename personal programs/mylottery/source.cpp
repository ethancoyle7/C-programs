#include <iostream>// infile stream
#include <iomanip>// for output
#include <ctime>// for random number generator

using namespace std;


#define MEGAPLIER 15 // balls numbered 1-15
#define REGULARBALLS 70 // there are 70 balls


// class that generates the megaplier numbers
class MegaPlierBall
{
private:
	// drawing a Mega ball from a set of balls numbers 1 through 15
	static int DrawnBalls;
	static int megaballs[MEGAPLIER];

public:
	MegaPlierBall();//default constructor
	int drawing();//constructor for draw ammount
	~MegaPlierBall() 
	{
	// class destructor
	};


};

MegaPlierBall::MegaPlierBall()
{
	DrawnBalls = 0;
	//default value will be det to 0 and then will be 
	//filled with 15 balls
	for (int i = 0; i < MEGAPLIER; i++)
		megaballs[i] = i + 1;//each holds an index value
}//default constructor


int MegaPlierBall::drawing()//dot operator for method
{
	int SizeofBin = MEGAPLIER - DrawnBalls;// megaplier will be of whats left
	//of the already plucked balls 

	int RandomBallNum = rand() % SizeofBin;
	//random ball will be a random number of the leftover balls

	for (int i = 0; i < MEGAPLIER; i++)
	{
		// skip over balls no longer in the bin
		if (megaballs[i] == -1)
			continue;// jump back to top then go to next iteration

		// choose the 'RandomBallNum'th ball from the remaining bin
		else if (megaballs[i] != -1 && RandomBallNum == 0)
		{	
			// rest the bin
			DrawnBalls++;
			int drawnBall = megaballs[i];
			megaballs[i] = -1;
			return drawnBall;
		}
		else {
			// skip over ball not chosen by rand() 'RandomBallNum'
			RandomBallNum--;
		}
	}
}

//definition of statics defaults
int MegaPlierBall::DrawnBalls = 0;
int MegaPlierBall::megaballs[] = { 0 };

// class name and declaration methods for regualr balls
class RegularBall
{
private:
	// balls drawn from 1-50
	static int DrawnBalls;// numbers is a set number
	static int balls[REGULARBALLS];// set number array of balls

public:
	RegularBall(); //default constructor
	~RegularBall() 
	{
		// destructor
	};
	int drawing(); //initialize drawing variable to 


};
//definition of reguar balls
RegularBall::RegularBall()
{
	DrawnBalls = 0;
	// fille with mega balls
	for (int i = 0; i < REGULARBALLS; i++)
	{
		balls[i] = i + 1;// index i +1 looping through nums
	}
}

int RegularBall::drawing()
{
	int SizeofBin = REGULARBALLS - DrawnBalls;
	int RandomBallNum = rand() % SizeofBin;
	for (int i = 0; i < REGULARBALLS; i++)
	{
		// skip balls not in the bin
		if (balls[i] == -1)
			continue;
		// crandom index value balls
		if (balls[i] != -1 && RandomBallNum == 0)
		{
			DrawnBalls++;
			int drawnBall = balls[i];
			balls[i] = -1;
			return drawnBall;
		}
		else {
			// skip over ball not chosen by rand() 'RandomBallNum'
			RandomBallNum--;
		}
	}
}
// class named lottery 
class MegaDrawing
{
public:
	// acts as a friend to the other classes
	int drawing(int DrawingNumbers);

	~MegaDrawing() 
	{
		//destructor for class mega
	};
};
int MegaDrawing::drawing(int DrawingNumbers)

{
	char answer;
	// auto variables - baskets are reinitialized after every drawing

	MegaPlierBall Mega;//calls megapliers class


	RegularBall RegBalls;// calls ergularballs class
	//format tge output strings of the randomly generated balls
	// [  # # # # ] then asks for a megaplier
	cout << "Ticket #" << right << setw(4) << DrawingNumbers << " ->        [";
	cout << setw(4) << RegBalls.drawing() << " ";
	cout << setw(4) << RegBalls.drawing() << " ";
	cout << setw(4) << RegBalls.drawing() << " ";
	cout << setw(4) << RegBalls.drawing() << " ";
	cout << setw(4) << RegBalls.drawing() << " ]  ";
	


	//prompt if player wants to do a megaplier
	cout << "\n\n do you want to megply enter y if so?" << endl;
	cin >> answer;
	
	if (answer == 'y')
	{
		cout<< " Your  MEGAPLIER Number is  : "  << left << setw(4) <<
			"[ (" << Mega.drawing() << ") ] \n\n\n";
		
	}
	else 
		cout << '\n';// if not move to the next play
	
	return 0;// end of requests
}

//access to private and public outside of class
// definition of the static data members initialized outside of class

int RegularBall::DrawnBalls = 0;//intial values
int RegularBall::balls[] = { 0 };//intital value

int main()
{
	MegaDrawing drawingLotto;// object of class drawingLotto with obj named drawingLotto
	signed int numTickets;
	cout << "how many tickets would you like?" << endl;
	cin >> numTickets;// ammount entered

	cout << "Number of Tickets that you requested were : " << numTickets << "\n\n";


	srand(time(NULL));// srand generates new number everytime

	for (signed int i = 0; i < numTickets; i++)//iterate through each time
		drawingLotto.drawing(i + 1);// calls the drawing function inside of class

	system("pause");
	return 0;//end of program
}
