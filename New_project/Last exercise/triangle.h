#ifndef TRIANGLE_H
#define TRIANGLE_H
namespace shapes{
    class triangle{
        private:
          double base;
          double height;
        public:
        triangle();
        triangle(double base, double height);
        void setbase(double preliminarybase);
        void setheight(double preliminaryheight);
        double getbase();
        double getheight();

    };
}
#endif