#pragma once
#include "Date.h"
#include <string>
#include <vector> 
using namespace std;


//****************************************************************************//
//name of class:   class name is account									  //
//																			  //
//paramters: this account class doesnt accept any paramter as it isnt a f(x)  //
//																			  //
//What this class does: so this class is initializing an account class        //
//		in which the user will run through the various instances of creating  //
//		and doing various transactions in which asks the user to  input the   //
//		account information such as account number,name, blance of checking   //
//		and savings. these are implemented by the various functions of indiv. //
//		setting and getting functions that utilize double or int parameters   //
//		to hold the user inputted values such like explained in the additonal //
//		info section
//
//return type: has no return type
//
//additional info:	Account(long unsigned int accNumber = 0, string Name = " Unknown",
//		double accBalance = 0.0, double CheckingBalance = 0.0,
//		double SavingsBalance = 0.0); this is the parameterized 
//		default constructor f(x)// in which all the values are preset to a 
//		default value
//			this has no return type just presetting the ammount to defaul val //
//
//		voidsetname(string) is the name entered by the user and is returned 
//			as  a string value
//		double getSavingBalance()const;-> holds the value of users savbal
//			as constant to be put out on the display function
//		double getCheckingBalance()const; ->holds the value of users savbal
//			as constant to be put out on the display function
//
//		double getSavingBalance()const;
//			-> user inputted balance set to const for display function
//		double getCheckingBalance()const;
//			-> user inputted balance set to const for display function
//
//		void setSavingBalance(double);
//			-> setter function inputted by user that sets the new Savblance
//		void setCheckingBalance(double);
//			-> setter function inputted by user that sets the new Chkblance
//		void setBalance(double);
//			-> this is the balance that is total of both of Chk and Savbal
//		double getBalance() const;
//			-> used to get the total balance of account for disply
//***************************************************************************//

class Account
{
private:

	// Private member variables.
	long unsigned int account_Number;
	char accountType;
	string name;
	long double Balance;
	long double CheckingBalance, SavingsBalance;
	Date last_Payment;

public:

	// Public member Functions.
	Account(long unsigned int accNumber = 0, string Name = "Unknown",
		char accType = 'X', long double accBalance = 0.0, long double CheckingBalance = 0.0,
		long double SavingsBalance = 0.0);

	// Destructor for the account
	~Account();

	string getName() const;
	void setName(string);

	long unsigned int getAccount_Number() const;
	void setAccount_Number(long unsigned int);

	long double getSavingBalance()const;
	long double getCheckingBalance()const;


	void setSavingBalance(long double);
	void setCheckingBalance(long double);

	void setBalance(long double);
	long double getBalance() const;


	void addAccount(Account);
	void withdraw(double);
	void deposit(double);
	void createAccount();
	void printMenu();
	void MenuSelection();

	static vector<Account> accountDatabase;
};

