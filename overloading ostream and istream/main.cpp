//istream and ostream overload

#include <iostream>
using namespace std;

class Date
{
    int Month, Day, Year;// encapsulated data

public:
  // default constructor
    Date(int m, int d, int y)
    {
        Month = m; Day = d; Year = y;
    }
    //include the friend so can format output
    //declared as friend utilizes and edit private members
    friend istream &operator>>( istream  &input, Date& newdate );

    friend ostream& operator<<(ostream& output, const Date& newdate);
};

// pass newdate as a const newdate address of newdate obj
ostream& operator<<(ostream& output, const Date& newdate)
{
    output << newdate.Month << '/' << newdate.Day << '/' << newdate.Year;
    return output;
}
// not constant because user input
istream &operator>>( istream  &input, Date& newdate ) 
{ 
         input >> newdate.Month>>  newdate.Day >> newdate.Year;
         //enter the month day and year
         return input;   
};


int main()
{
    Date newdate(5,5,5);// object of class newdate with preset values
  // just for test values print out preset
Date newdate2(int,int,int);
  cout<<" the preset date is "<<  newdate<< endl<< endl;

  // now lets enter a new date
    cout<< "enter the current date" << endl;

    cin>> newdate;// go to freinc function istream

    cout<<" the date you entered was  " << newdate<< endl<<endl;

    cout<< "yah i did it!! pat on the back"<< endl;

return 0;
}
