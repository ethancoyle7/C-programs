//2143 - OOPFinal Exam - Page 4 of 5February 23, 202110.  (50 points)  Writing aGrayscale ClassSo what is gray scale?  
//Its where you take the 3 individual parts of a color and using those values youcalculate a single value 
//that will be assigned to each of the 3 components, making it some shade of gray.For example here is red:  (0,255,0) and 
//here is the gray scale equivalent:  (85,85,85) (using the averagemethod from below).
//Your GrayScaler class is serious about its grayscalin‘ powers and has four methods to turn a color intoits monochromatic equivalent:
//•Lightness
//•Average
//•Luminosity
//•CustomLightness
//•The lightness method averages the most prominent and least prominent colors:
//•(max(R, G, B) +min(R, G, B))
//2.Average•The average method simply averages the values:•(R+G+B)/3.Luminosity
//•This  method  also  averages  the  values,  but  it  forms  a  weighted  average  to  account  for  humanperception. 
//We’re more sensitive to green than other colors, so green is weighted most heavily:•(0.21∗R+ 0.72∗G+ 0.07∗B)Custom
//•This method allows the user to pass in three floats to act as the weights in your formula:•w1∗R+w2∗G+w3∗B



#include <iostream>

using namespace std;

struct Color
{
    int red;
    int green;
    int blue;
    Color()
    {
        red = green = blue = 0;
    }
    
  Color(int rr, int gg, int bb)
  {
    red = rr;
    green = gg;
    blue = bb;
  }

    // bool operator==(const Color &other){
    //     return other.r == this->r && 
    //     other.g == this->g &&
    //     other.b == this->b;
    // }
  bool operator==(const Color &other)
  {
    if(other.red != red)
      return false;
    if(other.green != green)
      return false;
    if(other.blue != blue)
      return false;
    //else
    return true;
  }// if any of these fail will automatically exit
    
};

class GrayIsh
{
private:
   
  Color *c;// private by default if not specified

public:
    
  GrayIsh()
  {
    c = new Color;// pointer with new dynamic memory for color
  }
  
  GrayIsh(Color _c)
  {
    c = new Color(_c);
  }

  Color Lightness();
  Color Average();
  Color Luminosity();
  Color Custom(double,double,double);
};

//dot operator for function definition lum.
Color GrayIsh::Luminosity()
{
        int sum = 0;
        sum += c->red * .21;
        sum += c->green * .72;
        sum += c->blue * .07;
        c->red = c->green = c->blue = sum;
       
    return Color(c->red,c->green,c->blue);
}

int main() 
{
  // create instance of struct color obj c1 initialize
  Color C1(255,0,0);
  
  cout<< endl;
  GrayIsh G1(C1);

  Color Gray1 = G1.Luminosity();

  cout<<"( " << Gray1.red<<" , "<<Gray1.green
      <<" , "<<Gray1.blue<< " )"<<endl;

}
