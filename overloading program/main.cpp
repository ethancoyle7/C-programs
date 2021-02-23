#include <iostream>

using namespace std;

class Point3D
{
  private:
    int x;
    int y;
    int z;

public:

    // default Constructor here
    Point3D()
    { 
        x = y = z = 0;         // initializing all to 0
    }
    
     // Overloaded Constructor that init each data here.
    Point3D(int _x , int _y , int _z)
    {                 
        x = _x;
        y = _y;
        z = _z;
    } 
    
    // Copy Constructor here.
    Point3D(const Point3D &rhs)
    {
        this->x = rhs.x;
        this->y = rhs.y;
        this->z = rhs.z;
    }

    // Overload Ostream for 3D class so : [x,y,z] here.
    friend ostream& operator<<(ostream &os,const Point3D &rhs)
    {
        return os << "[" << rhs.x <<","<<rhs.y<<","<<rhs.z<<"]";
    }

    // Overlad Multiplication operator 3D here.
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
