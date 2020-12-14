#include <strstream>
#include "shapes.h"

Rectangle::Rectangle(float length, float width)
{
    this->length = length;
    this->width = width;
}

float Rectangle::getlength() const
{
    return length;
}

float Rectangle::getwidth() const
{
    return width;
}

float Rectangle::perimeter() const
{
    return 2 * length * 2 * width;
}

float Rectangle::area() const
{
    return length * width;
}

std::string Rectangle::str() const 
{
    std::strstream out;

    //"A rectangle width sides (3,4)"
    out <<"A rectangle width sides (" << length << "," << width << ")";

    return out.str();
}

