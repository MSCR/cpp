#include "Shape.h"

class Circle : public Shape
{
    private:
        float radious;
    
    public:
        Circle();
#ifdef VIRTUAL_DESTRUCTOR
        ~Circle() override;
#else
        ~Circle();
#endif
        void setRadious(float);
        float getRadious() const;

        void draw() override;
};