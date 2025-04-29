#include <iostream>
#include "area.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
using namespace std;
void areaOfSquare();
void areaOfTriangle();
void areaOfCircle();

int main(){
int precious = 0;
int choice;
while(precious == 0){
    
    cout <<"1.Calculate the area of square: " <<endl;
    cout <<"2.Calculate the area of triangle :" <<endl;
    cout <<"3.Calculate the area of circle: " <<endl;
    cout <<"4.Quit"<<endl;
    cin >> choice;
if (choice == 1){
    areaOfSquare();
}
else if(choice == 2){
     areaOfTriangle();
   
}
else if(choice == 3){
    areaOfCircle();
}

}
 }
 void areaOfSquare(){
    double side;
    shapes::square square1;
    cout <<"Enter side"<<endl;
    cin >> side;
    square1.setside(side);
    cout << "The area of the square is: "<<shapes::area::areaOfSquare(square1)<<endl;
 }
 void areaOfTriangle(){
    double base;
    double height;
    shapes::triangle triangle1;
    cout <<"Enter base"<<endl;
    cin >> base;
    cout<< "Enter height"<<endl;
    cin >> height;
    triangle1.setbase(base);
    triangle1.setheight(height);
    cout << "The area of the triangle is: "<<shapes::area::areaOfTriangle(triangle1)<<endl;
 }
 void areaOfCircle(){
    double radius;
    shapes::circle circle1;
    cout <<"Enter radius"<<endl;
    cin >> radius;
    circle1.setradius(radius);
    cout << "The area of the square is: "<<shapes::area::areaOfCircle(circle1)<<endl;
 }