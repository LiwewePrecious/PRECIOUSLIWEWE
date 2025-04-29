# include <iostream>
# include "classes.h"
using namespace std;
int main(){
   float length, width, length2, width2;

   rectangle firstRectangle; 
   cout<< "Enter the length: ";
   cin >>length;
   firstRectangle.addLength(length);
   cout << "Emter width: ";
   cin >>width;
   firstRectangle.addwidth(width);
   cout <<"The area of the rectangle is: " <<firstRectangle.getArea()<< endl;

   cout << "Enter the length of a second rectangle: ";
   cin >> length2;
   cout << "Enter the width of a second rectangle: ";
   cin >> width2;

   rectangle secondRectangle(length2, width2);
   cout <<"The area of the rectangle is: " <<secondRectangle.getArea();

   return 0;
}