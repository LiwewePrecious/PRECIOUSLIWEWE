#include "classes.h"
rectangle::rectangle() : length(0), width(0) {}
rectangle::rectangle(float length1, float width1) : length(length1), width(width1){}

void rectangle::addLength(float length1){
    length = length1;
}
void rectangle::addwidth (float width1){
    width = width1;
}
float rectangle::getLength (){
    return length;
 }
float rectangle::getWidth(){
    return width;
}
float rectangle::getArea(){
    return width*length ;
}
