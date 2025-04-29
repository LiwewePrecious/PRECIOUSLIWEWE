#include "area.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
double shapes::area::areaOfSquare(shapes::square area){
    return area.getside()*area.getside();

}
     double shapes::area::areaOfCircle(shapes::circle area){
        return area.getradius()*area.getradius()*3.1415926536;

     }
     double shapes::area::areaOfTriangle(shapes::triangle area){
        return 0.5*area.getbase()*area.getheight();

     }
