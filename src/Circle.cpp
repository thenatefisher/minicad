/* 
 * File:   Circle.cpp
 * Author: Nate Fisher
 * 
 * Created on September 19, 2011, 7:42 PM
 */

#include <Circle.h>
#include <math.h>
#include <sstream>

const std::string label = "Plain Old Circle";

Circle::Circle() : Shape() { typeLabel = label;}

Circle::Circle(rgbColor_t c) : Shape(c) { typeLabel = label; }

Circle::Circle(rgbColor_t c, style_t s) : Shape(c, s) { typeLabel = label; }

Circle::Circle(rgbColor_t c, style_t s, coordinate_t p) : Shape(c, s, p) { typeLabel = label; }

Circle::Circle(const Circle& orig) {}

Circle::~Circle() {}

std::string Circle::toString() {

    std::stringstream ss;

    ss << "I'm a circle with area: " << area() << " in^2. ";
    ss << Shape::toString();

    return ss.str();

}

float Circle::area() {

    const double PI = 3.141592;

    float area = PI*this->getSize()*this->getSize();

    return area;

}

