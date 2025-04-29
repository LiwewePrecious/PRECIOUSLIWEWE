#ifndef CLASSES_H
#define CLASSES_H
class rectangle {
    private:
      float length;
      float width;
    public:
       rectangle();
       rectangle(float length1, float width1);
       void addLength (float length1);   
       void addwidth (float width1);
       float getLength ();
       float getWidth();
       float getArea();       
};
#endif
