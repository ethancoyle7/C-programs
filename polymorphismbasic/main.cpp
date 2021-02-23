#include <iostream>
using namespace std;


class Polymorphism 
{ 
    public: 
      
    // functiontion with 1 int parameter 
    void function(int x) 
    { 
        cout << "value of x is : " << x << endl; 
    } 
      
    // functiontion with same name but 1 double parameter 
    void function(double x) 
    { 
        cout << "value of x is : " << x << endl; 
    } 
      
    // functiontion with same name and 2 int parameters 
    void function(int x, int y) 
    { 
        cout << "value of x and y is : " << x << ", " << y << endl; 
    } 
}; 
  
int main() { 
      
    Polymorphism object1; 
      
    // Which function is called will depend on the parameters passed 


    // goes to the function def of int x 
    object1.function(10); 
      
    // same object but does different param
    // douse a double
    object1.function(10.2); 
      
    // goes to the functiontion call for int int
    object1.function(5,10); 
    return 0; 
} 


// this is an example of polymorphism because of the ability to act in different ways

// poly morphism is the ability like a man to be a father and a son etc of woman to be mother, daughter and sister
