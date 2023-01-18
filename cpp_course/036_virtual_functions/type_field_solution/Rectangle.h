#include "Shape.h"

class Rectangle : public Shape
{
    private:
        int width;
        int height;
    public:
        Rectangle();
        void setWidth(int);
        int getWidth() const;

        void setHeight(int);
        int getHeight() const;
};