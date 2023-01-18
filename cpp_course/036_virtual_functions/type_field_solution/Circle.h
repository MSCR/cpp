#include "Shape.h"

class Circle : public Shape
{
    private:
        float radious;
    
    public:
        Circle();
        void setRadious(float);
        float getRadious() const;
};