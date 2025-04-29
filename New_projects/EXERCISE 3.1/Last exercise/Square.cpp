#include "square.h"
shapes::square::square() : side(0){}
shapes::square::square(double side){}
void shapes::square::setside(double preliminaryside){
    side =  preliminaryside;
}
double shapes::square::getside(){
    return side;
}