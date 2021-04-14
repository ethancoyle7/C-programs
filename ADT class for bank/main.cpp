//*************************************************************************//
//																		   //
//						    Assignment #2								   //
//						Student 1: Ethan Coyle							   //
//						Student 2: Loic Konan							   //
//				Data Structures and ADT : 10/23/2020					   //
//*************************************************************************//
//** There are multiple parts to this program: What this program will	   //
// do is first and date class will be initialized to imput the current	   //
//date in the correct mm//dd//year format and in the date class, it will   //
//check to see if the inputted day month and year is valid and not over    //
//after this has ran through and validate, the date values are then        //
//passed over to the account class utilizing both the account.cpp and .h   //
//files being sent over and inputted in the private class of this account  //
//thus this will hold the value of the validated date. In the account class//
//the user is first asked to create an account(because you cannot do bank  //
//transactions without first creating an account first. Once the user      //
//creates an account, then the display menu will give options of deposit,  //
// widthdrawal, display account and such like a normal bank prompt would   //
//these prompts will then utilize the set and get functions to grab the    //
//user inputted values to be used for transactional purposes. Finally, in  //
//main function, the four additional files Date.H, Date.cpp, Account.h &   //
//Account.cpp are included in the inclusion up at the top so once the      //
//program starts, these four additional files will be able to be accessed  //
//due to the class call of Bank.MenuSelection(); and Account Bank which    //
//the account bank is just the database being ran by vectors to allow the  //
// user to imput as many accounts into the memory as they want			   *//


#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Date.h"
#include "Account.h"
using namespace std;


int main()
{
	// Create an object from the Class Account.
	Account Bank;

	cout << "\t\t\t\t|============================================|\n";
	cout << "\t\t\t\t|                WELCOME TO                  |\n";
	cout << "\t\t\t\t|               LOIC & ETHAN                 |\n";
	cout << "\t\t\t\t|                   BANK                     |\n";
	cout << "\t\t\t\t|============================================|\n";

	// Calling the function to displays the menu options.
	Bank.MenuSelection();
	return 0;
}
