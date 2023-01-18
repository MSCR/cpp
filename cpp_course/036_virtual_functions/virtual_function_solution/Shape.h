#ifndef SHAPE_EXAMPLE
#define SHAPE_EXAMPLE

#define VIRTUAL_DESTRUCTOR

class Shape
{
    public:
        virtual void draw()=0;

#ifdef VIRTUAL_DESTRUCTOR
        virtual ~Shape();
#else
        ~Shape();
#endif

};

#endif