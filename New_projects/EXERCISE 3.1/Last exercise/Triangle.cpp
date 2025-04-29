#include "triangle.h"
shapes::triangle::triangle() : base(0),height(0){}
shapes::triangle::triangle(double base, double height){}
void shapes::triangle::setbase(double preliminarybase){
    base =  preliminarybase;
}
void shapes::triangle::setheight(double preliminaryheight){
    height =  preliminaryheight;
}
double shapes::triangle::getbase(){
    return base;
}
double shapes::triangle::getheight(){
    return height;
}