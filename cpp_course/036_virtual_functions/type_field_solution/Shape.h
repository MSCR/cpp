#ifndef SHAPE_EXAMPLE
#define SHAPE_EXAMPLE

enum class Type{ Rectangle, Circle};

class Shape
{
    private:
        Type type;
    public:
        void setType(Type);
        Type getType();
};

#endif