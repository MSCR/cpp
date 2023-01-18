#include "Shape.h"

class Rectangle : public Shape
{
    private:
        int width;
        int height;
    public:
        Rectangle();
#ifdef VIRTUAL_DESTRUCTOR
        ~Rectangle() override;
#else
        ~Rectangle();
#endif
        void setWidth(int);
        int getWidth() const;

        void setHeight(int);
        int getHeight() const;

        void draw() override;
};