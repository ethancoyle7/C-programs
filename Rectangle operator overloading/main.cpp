// this program shows the usage of a shallow copy

#include <iomanip>
#include <iostream> 
using namespace std; 
  
// Rectangle Class 
class Rectangle 
{ 

// key note: this private variables are the variables compared
// in the overloaded operators must be the same names to pass back

private: 
    int length; 
    int width; 
    int height; 
  
public: 
    // Function that sets the dimensions 
    void setDimensions(int len, int wid, int heighth) 
    { 
        length = len; 
        width = wid; 
        height = heighth; 
    } 
  
    // function to display the dimensions
    void DisplayDimesions() 
    { 
        
        cout << "\n Length = " <<right<< setw(5) <<length 
             << "\n width  = "<< right<< setw(5)<< width 
             << "\n Height = "<<right<< setw(5) << height 
             << endl; 
    } 
    Rectangle& operator*(const Rectangle& other) 
    {
        
        this->length = this->length * other.length;
        this->width = this->width * other.width;
        this->height = this->height * other.height;

        return *this;
    }
    
    // addition overloading

    //CLASS NAME&   operator and then  symbol(pass constant reference other ojcet)
    //this is the same format for all the overloaded operators

    Rectangle& operator+(const Rectangle& other) 
    {
        
        this->length = this->length + other.length;
        this->width = this->width + other.width;
        this->height = this->height + other.height;

        return *this;// dereference the pointer to new object
    }



}; 
  
// Driver Code 
int main() 
{ 
    // Object of class Rectangle 
    Rectangle rect1, rect3; 
  
    // Set dimensions of Rectangle rect1 
    rect1.setDimensions(5, 10, 15); 

    cout<< " Rectangle 1 Dimensions are : "<< endl;

    rect1.DisplayDimesions();

    cout<< endl;
  
    // When copying the data of object 
    // at the time of initialization 
    // then copy is made through 
    // COPY CONSTRUCTOR 
    Rectangle rect2 = rect1; // create new instance object

    cout<< " Rectangle 2 Dimensions are : "<< endl;
    
    rect2.DisplayDimesions(); 
    
    cout<< endl;
  
    // When copying the data of object 
    // after initialization then the 
    // copy is done through DEFAULT 
    // ASSIGNMENT OPERATOR 
    
    rect3 = rect1; 
    
    cout<< " Rectangle 3 Dimensions are : "<< endl;
    
    rect3.DisplayDimesions(); 
    
    cout<< endl;

    //utilize the multiplication overload to create
    // new Rectangle with dimensions that are the product of the other two Rectanglees store in newly create object
    // whcich will return a deep copy because of the pointers

    Rectangle rect4 = rect1 * rect2;

    cout<< " using the multiplication overload " << endl;
    cout<< " Rectangle 4 Dimensions are : "<< endl;
    
    
    rect4.DisplayDimesions();

  cout<< endl;

    // addition overloading

    Rectangle rect5= rect4 + rect3;
    
    cout<< " Rectangle 5 Dimensions are : "<< endl;
    
    rect5.DisplayDimesions();
  
return 0; 
}
