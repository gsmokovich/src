#include <strstream>
#include <iostream>
#include <stdlib.h>
#include "shapes.h"


Rectangle::Rectangle(float length, float width) {
	try
    {
        if(length < 0 || width < 0)
            throw "Error, sides cannot be less than 0";
            this->length = length;
            this->width = width;
    }
    catch(const char* message)
    {
        std::cerr << message << std::endl;
        exit(1);
    }
}  

float Rectangle::getlength() const {
	return length;
}

float Rectangle::getwidth() const {
	return width;
}

float Rectangle::perimeter() const {
	return 2 * length + 2 * width;
}

float Rectangle::area() const {
	return length * width;
}

std::string Rectangle::str() const {
	std::strstream out;
	// "A rectangle width sides (3,4)"

	out << "A rectangle width sides (" << length << "," << width << ")";
	return out.str();
}
/******************************/
Square::Square(float side) : Rectangle(side, side) {
    try
    {
        if(side < 0)
            throw "Error, sides cannot be less than 0";
    }
    catch(const char* message)
    {
        std::cerr << message << std::endl;
        exit(1);
    }
}

std::string Square::str() const {
	std::strstream out;
	// "A square width sides (3)"

	out << "A square width sides (" << getlength() << ")";
	return out.str();
}

/******************************/

Circle::Circle(float radius) 
{
    try
    {
        if(radius < 0)
            throw "Error, radius cannot be less than 0";
        this->radius = radius;
    }
    catch(const char* message)
    {
        std::cerr << message << std::endl;
        exit(1);
    }
}

float Circle::getradius() const {
	return radius;
}

float Circle::perimeter() const {
	return 2 * radius * PI;
}

float Circle::area() const {
	return PI * radius * radius;
}

std::string Circle::str() const {
	std::strstream out;
	// "A circle width radius (3)"

	out << "A circle width radius (" << radius << ")";
	return out.str();
}