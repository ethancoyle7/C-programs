#include "Date.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


//*******************************************************************************//
//function name -> Date(); this is the default constructor with preset			 //
//					values for day month and year until change					 //
//																				 //
//parameters->		there are no parameters just default values for date		 //
//																				 //
//what it does->	the purpose of this default constructor is solely to have a  //
//					default value assigned to these variables which will in turn //
//					be validated with the user input on account creation and     //
//					then be assigned a different value for each account once     // 
//					validadated that it is a valid inputted user                 //
//					date mm/dd//yyyy											 //
//no return type																 //
//*******************************************************************************//
Date::Date()
{
	year = 0000;
	month = 00;
	day = 0;
}


//***************************************************************************//
//function name -> void setDay(int);
//
//parameters- takes one parameter of int d
//
//what it does -> this function will be implemented once the user inputs date
//				  then it will check to see if it is a valid day between 1-31
//				  and if it is, then it will assign that to the day
//
//no return type
//
// additional info -> this assigned day(if valid will be assigned to the 
//					  last_paymentDate(day) in the account file
//***************************************************************************//
void Date::setDay(int d)
{
	// Validate the days.
	if (d < 1 || d > 31)
		cout << "\n\t\t\t\t    The day is invalid\n";
	else
		day = d;
}


//***************************************************************************//
//function name -> void setMonth(int);
//
//parameters- takes one parameter of int m
//
//what it does -> this function will be implemented once the user inputs date
//				  then it will check to see if it is a valid month between 1-12
//				  and if it is, then it will assign that to the month
//
//no return type
//
// additional info -> this assigned day(if valid will be assigned to the 
//					  last_paymentDate(month) in the account file
//***************************************************************************//
void Date::setMonth(int m)
{
	// Validate the month.
	if (m < 1 || m > 12)
		cout << "\n\t\t\t\t    The month is invalid\n";
	else
		month = m;
}


//***************************************************************************//
//function name ->void setYear(int);
//
//parameters- takes one parameter of int y
//
//what it does -> this function will be implemented once the user inputs date
//				  then it will check to see if it is a valid year between
//				  0000 and 9999 as preset years
//				  and if it is, then it will assign that to the year
//
//no return type
//
// additional info -> this assigned day(if valid will be assigned to the 
//					  last_paymentDate(year) in the account file
//***************************************************************************//
void Date::setYear(int y)
{
	// Invalid year 4 digits i.e year 10,000, 0.001
	if (y < 0000 || y > 9999)
		cout << "\n\t\t\t\t    The year is invalid" << endl;
	else
		year = y;
}


//***************************************************************************//
//function name -> void DisplDate() const;
//
//parameters- there is no preset parameters but the values are constant
//
//what it does ->this functions purpose and only purpose is to pass the valid
//				  day, month ,and year and pass them as a constant which will be 
//				 used whenever the user implements the display account, and the 
//				 assigned date for each account which will be assigned to 
//				 each account number
//
//no return type
//
// additional info -> this function is just holding the values of the 
//					  validadated day,month,and year and will be passed along 
//					  for assignment and implementation in our account cpp
//					
//***************************************************************************//
void Date::DisplDate() const
{
	// Display the MONTH, DAY and YEAR in mm/dd/yyyy format.
	cout << month << "/" << day << "/" << year << '\n';
}
