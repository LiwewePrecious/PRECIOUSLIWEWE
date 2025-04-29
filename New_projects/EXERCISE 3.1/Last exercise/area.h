#ifndef AREA_H
#define AREA_H
#include "square.h"
#include "circle.h"
#include "triangle.h"
namespace shapes{
class area{
    public:
     double static areaOfSquare(square area);
     double static areaOfCircle(circle area);
     double static areaOfTriangle(triangle area);

};
}
#endif