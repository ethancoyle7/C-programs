#include <iostream>

using namespace std;




 //(25 points)  Write aPoint3Dclassdefinitionthat will represent a 3D point.  Assume all values tobe integers.  Do not add any setters or getters.Include:
//(a)  (5 points)  Include a default constructor that sets each data member to zero.
//(b)  (10 points)  Include an overloaded constructor to init each data member.
//(c)  (10 points)  Include a copy constructor.

// class called point3d

class Point3D
{
  // all values assigned to integer values for return
  private:
    int x;
    int y;
    int z;

public:

    // default Constructor here
    // initialize all values to 0 for all three points
    Point3D()
    { 
        x = y = z = 0;         
    }
    
     // Overloaded Constructor that init each data here.
     // initialize all 
    Point3D(int _x , int _y , int _z)
    {                 
        x = _x;
        y = _y;
        z = _z;
    } 
    
    // Copy Constructor here.
    // this will copy everything from one to new object
    Point3D(const Point3D &rhs)
    {
        this->x = rhs.x;
        this->y = rhs.y;
        this->z = rhs.z;
    }

    // Overload Ostream for 3D class so : [x,y,z] here.
    // Overloadostreamfor our 3D class so it prints the values like so: 
    //[x, y, z] where x,y, and z would be integers (obviously)
  
    friend ostream& operator<<(ostream &os,const Point3D &rhs)
    {
        return os << "[" << rhs.x <<","<<rhs.y<<","<<rhs.z<<"]";
    }

    // Overlad Multiplication operator 3D here.
    //Overload the multiplication operator for our 3D point class 
    //(just multiply each value with its equivalent in each instance).
    
  // anytime asked to overload assignment operator will be done like this
  // any instance of change, we will change the math symbol to whichever symbol we are using in
  // function header and the symbol in the body
  
    Point3D& operator*(const Point3D &rhs) 
    {
        
        this->x = this->x * rhs.x;
        this->y = this->y * rhs.y;
        this->z = this->z * rhs.z;

        return *this;
    }
    
    //overload the assignment operator? Yes It look like it.
    Point3D& operator=(const Point3D &rhs) 
    {
        // Check for self-assignment!
        if (this == &rhs)         // Same object?
        return *this;            // Yes, so skip assignment, and just return 
       
        this->x = rhs.x;
        this->y = rhs.y;
        this->z = rhs.z;

        return *this; 
    }

};

int main() 
{
  cout << "Hello World!\n";
  
  Point3D P1(4,5,6);
 
  Point3D P2(2,3,4);
   
  Point3D P3 = P1 * P2;

  cout<< P3 << endl;
}
