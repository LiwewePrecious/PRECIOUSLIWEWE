#ifndef SQUARE_H
#define SQUARE_H
namespace shapes{
    class square{
        private:
          double side;
        
        public:
        square();
        square(double side);
        void setside(double preliminaryside);
        double getside();
    };

}
#endif