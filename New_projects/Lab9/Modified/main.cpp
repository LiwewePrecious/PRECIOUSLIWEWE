#include <iostream>
#include "triangle.h"
#include "rectangle.h"

using namespace std;

int main(){
    rectangle rect;
    triangle trgl;
    polygon*ppoly1 = &rect;
    polygon*ppoly2 = &trgl;
    ppoly1 ->setValues(4,5);
    ppoly2 ->setValues(4,5);
     cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}

