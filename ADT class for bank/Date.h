#pragma once


//******************************************************************************//
//name of class:   class name is Date										    //
//																			    //
//paramters: No parameters													    //
//																			    //
//What this class does: so this class is initializing an Date class	            //
//		in which the user will run through the various instances adding new     //
//		new dates these are implemented by the various functions.			    //
//		setting and getting functions that utilize int parameters			    //
//		to hold the user inputted values such like explained in the additonal   //
//		info section														    //
//																			    //
//return type: has no return type											    //
//																				//
//additional info:																//
//																				//
//			void setMonth(int);												    //
//			-> setter function inputted by user that sets the Month.			//
//																				//
//			void setDay(int);													//
//			-> setter function inputted by user that sets the Day				//
////																			//
//			void setYear(int);													//
//			-> used to set the year and to pass it to the function DisplayDate. //
//																			    //
//			void DisplDate() const;												//
//			-> 	Display the MONTH, DAY and YEAR in mm/dd/yyyy format.			//
//																				//
//******************************************************************************//

class Date
{
private:

	// Private member variables.
	int month, day, year;

public:

	// Default Consturctor.
	Date();

	// Member Functions.
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void DisplDate() const;
};
