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
