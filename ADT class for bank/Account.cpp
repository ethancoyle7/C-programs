//acct.cpp


#include "Account.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


//****************************************************************************//
//function name-> Account::Account(long unsigned int accNumber, string Name,
//				  double accBalance, double accSavings, double
//				  accCheckings)
//
// parameters-> this function is utilizing the long unsigned int for the acctnum
//				string as a name, accbalance as a double, and checking/
//				savings accounts both as long doubles
//
//What this does?-> the only thing that this code does is that it  initializes 
//					all of these variables to  set variable names to be used
//					in the integration, implementation and displaying of the 
//					stored values
///
// this also does not have a return type
//****************************************************************************//
Account::Account(long unsigned int accNumber, string Name, char accType,
	long double accBalance, long double accSavings, long double accCheckings)
{
	account_Number = accNumber;
	accountType = accType;
	name = Name;
	Balance = accBalance;
	CheckingBalance = accCheckings;
	SavingsBalance = accSavings;
}

// Initialize the account in a vector to hold database for differents Accounts.
vector<Account> Account::accountDatabase;



//***************************************************************************//
//function name and method -void Account::addAccount(Account account)
//
//parameters  it is accepting a vector of accounts to add to to
//
//what it does- the main purpose of this method is simply
//				within the vector, if the user wishes to add another account,
//				then the accountdatabase.push_back(account) simply sets the
//				end of the database of accounts to accept another account
//				creation and info and then make that account become the 
//				end of the database until the user decides to add another 
//				account in which it will be pushed back once more to be the 
//				end of that one and so on
//
// there is no return type to this method
//
//note- vectors are fluctuation so with this function, can add as many new 
//		accounts as you wish and will keep pushing back until you dont want to
//		anymore.
//****************************************************************************//


void Account::addAccount(Account account)
{
	accountDatabase.push_back(account);
}


// User Defined destructor.
Account::~Account()
{
}


//***************************************************************************//
//function name is string Account::getName() const
//
//parameters - there is no parameters being pushed into this function
//
//what it does- the purpose of this method and function is simply to retrieved
//				a name associated with specified accounts you are getting, so 
//				you are retrieving a const name associated with account 
// the return type  the return tpye of this  is returning the name as a string
//					name that stays consistent with account creation
//
//Note- once the user sets the account name, then that name is set for that 
//		and to access that name for the certain account, must use a retrieval
//		to retrieve that constant value inputted for name of account
//
//***************************************************************************//
string Account::getName() const
{
	return name;
}


//***************************************************************************//
//function name is long unsigned int Account::getAccount_Number() const
//
//parameters - there is no parameters being pushed into this function
//
//what it does- the main purpose of this function and method is to simply
//				pass the constant value of account number through the program
//				once initialized for new account, everything after(within the 
//				guidelines of that account) have the same account number
//
// the return type  is returning the account number as a long unasigned int const
//				this means that the account number is a set value and until it 
//				it prompted to create new account, this account number entered
//				is associated with that account info
//
//Note- once initialized,and called upon, this const value for account number is set
//			and holds the other values within it like checking,savings etc balances
//			and it does not change
//
//***************************************************************************//
long unsigned int Account::getAccount_Number() const
{
	return account_Number;
}


//***************************************************************************//
//function name is long double Account::getBalance() const
//
//parameters - there is no parameters being pushed into this function
//
//what it does- the main purpose of this is to display the total including 
//				checkingbalance+savingsbalance and return this sum as the const
//				value for the balance of each account
//
// the return type of this is the sum of checkingbalance and savings balance
//				i.e. this is the sum of the ammount of both accounts
//
//Note- when initialized as constant this value this value stays consistant
//			and does not change to anything other than being update to reflect
//			changes in the values of savings and checking but when it is constant
//			the value does not reset or become any other number other than
//			specified for each acount
//
//***************************************************************************//
long double Account::getBalance() const
{
	return CheckingBalance + SavingsBalance;
}


//***************************************************************************//
//function name is long double Account::getSavingBalance() const
//
//parameters - there is no parameters being pushed into this function
//
//what it does-  the main purpose of this function is to retrieve the inputted
//				 user balance  that has been manipulated by the various
//				 transactions and pass that as a constant value so it can be
//				 used for the various instances in the switch statement but the
//				 value for the savings account will be set value that is 
//				then retrieved whenever the user wishes to display contents of 
//				individualized account which then shows what is left of the original
//				value
//
//
// the return type of this is a long double value that holds the ammount of 
//			savingsbalance
//
//Note- when initialized as constant this value that it retrieves is set ammount
//			for savings and stays constant throughout transactions so you start 
//			with number and then upon completion, that original number is 
//			the same number but value of it after each transactions are completed
//
//***************************************************************************//
long double Account::getSavingBalance() const
{
	return SavingsBalance;
}


//***************************************************************************//
//function name is long double Account::getCheckingBalance() const
//
//parameters - there is no parameters being pushed into this function
//
//what it does-  the main purpose of this function is to retrieve the inputted
//				 user balance  that has been manipulated by the various
//				 transactions and pass that as a constant value so it can be
//				 used for the various instances in the switch statement but the
//				 value for the checking account will be set value that is 
//				then retrieved whenever the user wishes to display contents of 
//				individualized account which then shows what is left of the original
//				value
//
//
// the return type of this is a long double value that holds the ammount of 
//			checkingbalance.
//
//***************************************************************************//
long double Account::getCheckingBalance() const
{
	return CheckingBalance;
}


//***************************************************************************//
//function name is void Account::setName(string userName)
//
//parameters takes one parameter which is name
//
//what it does- this functions only purpose is to take the inputted name
//				for the name inputted by user and sets the new name for each
//				account to be set to this inputted name so it will be different
//				for each account and set to a new name each time
//
// there is no return type within this function just setting a new name
//
//***************************************************************************//
void Account::setName(string userName)
{
	name = userName;
}



//****************************************************************************//
//function name -> void Account::setAccount_Number(long unsigned int 
//				   new_Account_Number)
//
//parameters- 1 parameter holding a new account number
//
//what it does -> this code will  check to make sure that the account num
//				  is not negative number and then it will search for it in the 
//				  vector database and if is new then add to the database
//
//has no return type
//***************************************************************************//
void Account::setAccount_Number(long unsigned int new_Account_Number)
{
	// Create a valid account number.
	if (new_Account_Number < 1)
		throw "\n\t\t\t\t           Account Number cannot be zero or negative\n";


	for (unsigned int i = 0; i < accountDatabase.size(); i++)

		// If same account number display error.
		if (new_Account_Number == accountDatabase[i].getAccount_Number())
			throw "\n\t\t\t\t           Entered Account Number is already in use\n";

	// If it is a valid account then create it.
	account_Number = new_Account_Number;
}



//***************************************************************************//
//function name -> void Account::setSavingBalance(double savings)
//
//parameters- 1 parameter assigning the inputted savings balance in create
//			  to savingsbalance
//what does it do?	-> all this does is assign the inputted value changing 
//						the preset value of savings to savingsbalance
//no return type
//***************************************************************************//
void Account::setSavingBalance(long double savings)
{
	SavingsBalance = savings;
}


//***************************************************************************//
//function name -> void Account::setCheckingBalance(double checking)
//
//parameters- 1 parameter assigning the inputted savings balance in create
//			  to checkingbalance
//what does it do?	-> all this does is assign the inputted value changing 
//						the preset value of savings to checkingbalance
//no return type
//***************************************************************************//
void Account::setCheckingBalance(long double Checkings)
{
	CheckingBalance = Checkings;
}


//***************************************************************************//
//function name-oid Account::setBalance(double newBalance)
//
//parameters- this hold one paramter of the total of checking and savings as
//			  a double 
//
//What does it do?  this will check to make sure that the balance is greater 
//					than zero and not negative then assign the new balance
//					to the balance  including (checking + savings)
//
//****************************************************************************//
void Account::setBalance(long double newBalance)
{
	if (newBalance < 0)
		throw "\n\t\t\t\t           Balance cannot be negative\n";

	Balance = newBalance;
}


//***************************************************************************//
//function name-void Account::withdraw(double amount)
//
//parameters- this holds one parameter holding input ammount from switch 
//			  statement of withdraw to check if it is valid
//
//What does it do? this will be initialized through the switch statement 
//				   which is initialized to check if the withdraw ammount is
//				   not negative and if it isnt, then it will add the amt
//				   to the checkingbalance associated with the account specified
//****************************************************************************//
void Account::withdraw(double amount)
{
	if (amount < 0)
		throw "\n\t\t\t\t           Withdrawal amount cannot be negative\n";

	CheckingBalance -= amount;
}


//***************************************************************************//
//function name-void Account::deposit(double amount)
//
//parameters- this holds one parameter holding input ammount from switch 
//			  statement of deposit to check if it is valid
//
//What does it do? this will be initialized through the switch statement 
//				   which is initialized to check if the deposit ammount is
//				   not negative and if it isnt, then it will add the amt
//				   to the checkingbalance associated with the account specified
//****************************************************************************//
void Account::deposit(double amount)
{
	if (amount < 0)
		throw "\n\t\t\t\t           Amount for deposit cannot be negative\n";
	CheckingBalance += amount;
}


//***************************************************************************//
//FUNCTION NAME is void Account::printMenu()								 //
//PARAMETERS :accepts no previous parameters								 //
//																			 //
//WHAT IS THIS FUNCTION DOING: The purpose of this void function is to		 //
//	displat to the user upon running and each successful transaction		 //
//	to prompt the user on which type of transaction the user wants to do	 //
//																			 //
//RETURN TYPE: Has no return type											 //
//																			 //
// ADDITIONAL INFORMATION :There is nothing else that this function is doing //
//	aside from displaying the option table. However, once the user types in  //
//	a value, the compiler will then run through menu selection switch	     //
//	statementwhich is shown in main: so this is displayed the user			 //
// immediately get transfered to the menu selection() that runs through		 //
//their options but this isnt explicitly a part of this function			 //
//***************************************************************************//
void Account::printMenu()
{
	cout << "\t\t\t\t|============================================|\n";
	cout << "\t\t\t\t|Please select one of the following options: |\n";
	cout << "\t\t\t\t|                                            |\n";
	cout << "\t\t\t\t|   1. Create an account                     |\n";
	cout << "\t\t\t\t|   2. Withdraw                              |\n";
	cout << "\t\t\t\t|   3. Deposit                               |\n";
	cout << "\t\t\t\t|   4. Account summary                       |\n";
	cout << "\t\t\t\t|   5. Transfer to a Different account       |\n";
	cout << "\t\t\t\t|   6. Transfer from:                        |\n";
	cout << "\t\t\t\t|       a. Checking to Savings               |\n";
	cout << "\t\t\t\t|       b. Savings to Checkings              |\n";
	cout << "\t\t\t\t|   7. Exit                                  |\n";
	cout << "\t\t\t\t|   -->                                      |\n";
	cout << "\t\t\t\t|============================================|\n";
}



//***************************************************************************//
//function name -> int findAccount(int account_Number)
//
//parameters- 1 parameter which is the account number
//
//what does it do? this will search the  database for the inputted ACCT NUM
//					then if it finds it, it will return the index of it to be
//					used in the computation, and other performance tasks
// Find account in account database and return index of that account
//****************************************************************************//
int findAccount(int account_Number)
{
	for (unsigned int i = 0; i < Account::accountDatabase.size(); i++)
		if (account_Number == Account::accountDatabase[i].getAccount_Number())
			return i;
	return -1;
}



//***************************************************************************//
//function name-   Account:: create account (using scope operator)
//
//parameters: this function takes no parameters. However, the values before 
//			  input are set to default value which this code creates a new
//			  value for each name, CheckingBalance,SavingsBalance and ActNum
//
//What does it do?-- this functions main purpose is to prompt the user to 
//					 input a name,checkingbalance,savingsbalance,actnum
//				     to create a new account to add to the bank account database
//					 in doing this, with the vector being used, it adds each 
//					 account as new account to database pushing it back one
//					each time
//
//Additional info- this function is going to be utilizing the get and set
//					functions of each parameter of name,checkbal,savbal,actnum
//
//					this also is initializing the date.cpp which once the user
//					inputs the date, will check to make sure it is valid, then
//					set that as the last payment dates mm/dd/yyyy
//
//***************************************************************************//
void Account::createAccount()
{
	Account newAccount;
	string name;
	int account_Number, day, month, year;

	// Display the menu and then enter account info
	printMenu();

	cout << "\n\t\t\t\t--> Please Enter space then your name:";

	// Capture inputted name.
	cin.get();
	getline(cin, name);
	newAccount.setName(name);

	cout << "\n\t\t\t\t--> Please enter your Account Number: ";
	cin >> account_Number;

	// Set this as a new Account Number.
	newAccount.setAccount_Number(account_Number);


	cout << "\n\t\t\t\t--> Please enter your Savings balance: ";
	cin >> SavingsBalance;
	newAccount.setSavingBalance(SavingsBalance);


	cout << "\n\t\t\t\t--> Please enter your Checkings balance: ";
	cin >> CheckingBalance;
	newAccount.setCheckingBalance(CheckingBalance);

	// A New savings and checking balance is added.
	newAccount.setBalance(Balance);

	cout << "\n\t\t\t\t--> Please Enter Today's Date (mm dd yyyy): ";
	cin >> month >> day >> year;
	cin.get();

	last_Payment.setMonth(month);
	last_Payment.setDay(day);
	last_Payment.setYear(year);

	// Add account to the database
	newAccount.addAccount(newAccount);
}


//***************************************************************************//
//function name - void Account::MenuSelection() (using scope operator)
//
//parameters- this function does not have any parameters
//
//what does it do?-	the purpose of this function is to allow the user,after
//					creating a new account to choose out of the options 1-7
//					what to do next i.e deposit,withdraw,transfer to same or 
//					different account or exit the program if they are done as 
//					well as display the contents of a account using account num
//
//additional info-	with each response from the user 1-7, it will go to the 
//					corresponding function to fulfil the wishes of that choice 
//					by looking up individuals account and then making changes
//					accordingly
//
// for cases, this section will be checking for valid input for accounts
//			then it will utilize the set and get functions to obtain the methods
//			of doing deposits and withdraws and printing using valid imput
//in addition, for these instances, it is using vectors to find the accounts
//			and use the set const data of user inputted acct info to perform
//			various tasks associated with these case statements
//****************************************************************************//
void Account::MenuSelection()
{
	int option = 1, account, Account_Number;

	while (option != 7)
	{
		try
		{
			switch (option)
			{
			case 1: createAccount();// user inputted account creation
				break;


				// Withdraw money
			case 2:
			{
				cout << "\n\t\t\t\t--> Enter amount to withdraw: ";
				double withdrawalAmount;
				cin >> withdrawalAmount;


				cout << "\n\t\t\t\t--> Please enter your Account Number: ";
				cin >> Account_Number;

				// Calling the function to search and see if valid the account is valid.
				account = findAccount(Account_Number);

				// If account number does not match any in the DataBase.
				if (account == -1)
				{
					cout << "\n\t\t\t\t~ Account Number does not match any in the"
						" database ~\n";
				}

				else
				{
					char choice;
					cout << "\n\t\t\t\t--> Withdraw from your Savings or Checkings (S/C): ";
					cin >> choice;

					if ((choice == 's' || choice == 'S') && Account::accountDatabase
						[account].getSavingBalance() >= withdrawalAmount)
					{// if greater than withdraw ammount, do the transaction
						SavingsBalance -= withdrawalAmount;
						Account::accountDatabase[account].setSavingBalance(SavingsBalance);
						cout << "\n\t\t\t\t    ~ Amount successfully withdrawn ~\n";
					}

					else if ((choice == 'c' || choice == 'C') && Account::accountDatabase
						[account].getCheckingBalance() >= withdrawalAmount)
					{// if enough to cover withdraw, do the transaction and update ammount
						CheckingBalance -= withdrawalAmount;
						Account::accountDatabase[account].setCheckingBalance(CheckingBalance);
						cout << "\n\t\t\t\t    ~ Amount successfully withdrawn ~\n";
					}
					else// if not enough display error
					{
						cout << "\n\t\t\t\t    ~ Withdrawal not successful ~\n";
					}
				}
			}
			break;

			// Deposit money
			case 3:
			{
				cout << "\n\t\t\t\t--> Enter amount to deposit: ";
				double depositAmount;
				cin >> depositAmount;


				cout << "\n\t\t\t\t--> Please enter your Account Number: ";
				cin >> Account_Number;

				// Calling the function to search and see if valid the account is valid.
				account = findAccount(Account_Number);

				if (account == -1)
				{
					cout << "\n\t\t\t~ Account Number does not match any in the "
						"database ~\n";
				}
				else
				{
					char choice;
					cout << "\n\t\t\t\t--> Deposit to your Savings or"
						" to your Checkings (S/C): ";
					cin >> choice;


					if ((choice == 's' || choice == 'S') && Account::accountDatabase
						[account].getSavingBalance() >= depositAmount)
					{
						SavingsBalance += depositAmount;
						Account::accountDatabase[account].setSavingBalance(SavingsBalance);
						cout << "\n\t\t\t\t          ~ Amount successfully Depostit ~\n";
					}

					else if ((choice == 'c' || choice == 'C') && Account::accountDatabase
						[account].getCheckingBalance() >= depositAmount)
					{
						CheckingBalance += depositAmount;
						Account::accountDatabase[account].setCheckingBalance(CheckingBalance);
						cout << "\n\t\t\t\t        ~ Amount successfully Deposit ~\n";
					}
					else
					{
						cout << "\n\t\t\t\t        ~ Deposit not successful ~\n";
					}
				}
				break;

				// Display account summary
			case 4:
			{
				cout << "\n\t\t\t\t--> Please Enter your Account Number: ";
				cin >> Account_Number;

				// Calling the function to search and see if valid the account is valid.
				account = findAccount(Account_Number);

				if (account == -1)
				{
					cout << "\n\t\t\t~ Account Number does not match any in"
						" the database ~\n";
				}
				else
				{
					cout << "\n\n\t\t\t\t           ~ ACCOUNT SUMMARY ~\n"

						<< "\n\t\t\t\t --> Name:              "
						<< Account::accountDatabase[account].getName()// retrieve act name

						<< "\n\n\t\t\t\t --> Account Number:    "
						<< Account::accountDatabase[account].getAccount_Number() << '\n';
					// get the account number asscoiated with account

					cout << fixed << setprecision(2) << "\n\t\t\t\t --> Total Balance:     "
						<< Account::accountDatabase[account].getBalance() << " $\n";
					//retrieve the balance of said account
					cout << fixed << setprecision(2) << "\n\t\t\t\t --> Savings Account:   "
						<< Account::accountDatabase[account].getSavingBalance()
						<< " $\n";
					//retrieve the savings balance
					cout << fixed << setprecision(2) << "\n\t\t\t\t --> Checkings Account: "
						<< Account::accountDatabase[account].getCheckingBalance()
						<< " $\n";
					//get checking balance of that account
					cout << "\n\t\t\t\t --> Transaction Date:  ";
					last_Payment.DisplDate();// grab the date
					cout << "\n";
				}
			}
			break;

			// Make a transaction
			case 5:
			{
				cout << "\n\t\t\t\t|================= Transfer ===================|\n";
				cout << "\n\t\t\t\t--> Enter Transaction amount: ";
				double amount;
				cin >> amount;

				cout << "\n\t\t\t\t--> From Account #: ";
				cin >> Account_Number;

				// Calling the function to search and see if valid the account is valid.
				account = findAccount(Account_Number);

				if (account == -1)
				{
					cout << "\n\t\t\t\t~ Account Number does not match any in"
						" our database ~\n";
				}
				else
				{
					cout << "\n\t\t\t\t--> To Account #: ";
					cin >> Account_Number;

					int secondAccount = findAccount(Account_Number);
					if (secondAccount == -1)// serach for valid account
					{
						cout << "\n\t\t\t\t~ Account Number does not match our database ~\n";
					}

					else
					{
						bool transactionPerformed = false;
						if (Account::accountDatabase[secondAccount].getBalance() >= amount)
						{// if the ammount is enough in second act, deposit then with from 1st
							Account::accountDatabase[secondAccount].deposit(amount);
							Account::accountDatabase[account].withdraw(amount);
							transactionPerformed = true;
						}

						else if (Account::accountDatabase[account].getBalance() >= amount)
						{ // if balance is enough to cover, then do the transfer
							Account::accountDatabase[secondAccount].withdraw(amount);
							Account::accountDatabase[account].deposit(amount);
							transactionPerformed = true;
						}

						if (!transactionPerformed)
						{
							cout << "\n\t\t\t\t    ~ Transaction not successful ~\n";
						}
						else
						{
							cout << "\n\t\t\t\t   ~Transaction successfully completed ~\n"
								<< "\n\t\t\t\t          Date: ";
							last_Payment.DisplDate();// show the date

						}
					}
				}
			}
			break;

			// Transfer from Savings to Checkings or from Savings to Checkings 
			case 6:
			{
				cout << "\t\t\t\t--> Select option (A / B): ";

				char choice;
				cin >> choice;

				cout << "\n\t\t\t\t--> Enter transaction amount: ";
				double amount;
				cin >> amount;

				cout << "\n\t\t\t\t--> Please enter your Account Number: ";
				cin >> Account_Number;

				// Calling the function to search and see if valid the account is valid.
				account = findAccount(Account_Number);

				if (account == -1)
				{
					cout << "\n\t\t\t\t~ Account Number does not match any in the"
						" database ~\n";
				}

				else
				{
					if ((choice == 'a' || choice == 'A') && Account::accountDatabase
						[account].getCheckingBalance() >= amount)
					{
						SavingsBalance += amount;// add ammount to sav subtract from checking
						CheckingBalance -= amount;

						Account::accountDatabase[account].setCheckingBalance(CheckingBalance);
						Account::accountDatabase[account].setSavingBalance(SavingsBalance);

						cout << "\n\t\t\t\t          ~ Transaction successfull ~\n";

					}

					else if ((choice == 'b' || choice == 'B') && Account::accountDatabase
						[account].getSavingBalance() >= amount)
					{
						CheckingBalance += amount;// if enough to cover, then add to check
						SavingsBalance -= amount;// subtact from savings
						// update the account balances
						Account::accountDatabase[account].setCheckingBalance(CheckingBalance);
						Account::accountDatabase[account].setSavingBalance(SavingsBalance);

						cout << "\n\t\t\t\t          ~ Transaction successfull ~\n";
					}
					else
					{
						cout << "\n\t\t\t~ Withdrawal not successful - check the state of"
							" balance ~\n";
					}
				}
			}

			}
			}
		}
		catch (const char* msg)
		{
			cerr << msg;
		}

		// Display the  menu.
		printMenu();

		cout << "\n\t\t\t\t     =========> ";
		cin >> option;

		// If the  choice of menu is not 1-7.
		while (option < 1 || option > 7)
		{
			cout << "\n\t\t\t\t--> Please enter a valid option (1-8): ";
			cin >> option;
		}
	}
	cout << "\t\t\t\t================================================\n"
		<< "\t\t\t\t ~ THANK   YOU   FOR   USING   OUR   SERVICES ~\n"
		<< "\t\t\t\t================================================\n";
}
