#include "circle.h"
shapes::circle::circle() : radius(0){}
shapes::circle::circle(double radius){}
void shapes::circle::setradius(double preliminaryradius){
    radius =  preliminaryradius;
}
double shapes::circle::getradius(){
    return radius;
}