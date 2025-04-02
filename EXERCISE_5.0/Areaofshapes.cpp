#include <iostream>
using namespace std;

int areaOfSquare(int side){
    return side*side;}

int areaOfRectangle(int length, int width){
    return length * width;
}  
int areaOfTriangle(int base, int height){
    return 0.5 * base * height;
}  


int main(){
    int length;
    int width;
    int side;
    int base;
    int height;
    int number;

    do{
    cout << "Please select the area of the shape to calculate\n";
    cout << "1. Square\n 2.Rectangle\n 3.Triangle\n 4.Quit program\n Enter selection\n";
    cin>>number;

 switch(number){
   case 1:
    cout <<"Enter sides of a square: ";
    cin >> side;
     cout<< "The area of square is:" << areaOfSquare(side)<< endl;
     break;
 
  case 2:
    cout <<"Enter length and width of the rectangle:\n ";
    cin >> length >> width;
     cout<< "The area of rectangle is:" << areaOfRectangle(length , width)<< endl;
     break;
 
  case 3:
     cout << "Enter base and height of a triangle:\n ";
     cin >> base >> height;
      cout<< "The area of triangle is:" << areaOfTriangle(base , height)<< endl;
      break;

  case 4:
      cout << "The program quits";
      break;
    
default: 
cout << "Invalid selection.please enter a valid input\n" << endl;    
      }
      
    }

    while(number !=4);
      return 0;
    }
