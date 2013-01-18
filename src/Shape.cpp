/* 
 * File:   Shape.cpp
 * Author: Nate Fisher
 * 
 * Created on September 19, 2011, 7:15 PM
 */

#include <Shape.h>
#include <iostream>
#include <sstream>

const std::string style_t_desc[3] = {"Embossed", "Normal", "Cartoon"};

/*
 * Default Shape constructor
 * Creates default values for a Shape object if none are defined
 */
Shape::Shape() {

    rgbColor_t c;
    c.red = 0;
    c.green = 0;
    c.blue = 0;

    style_t s = SHAPE_STYLE_NORM;

    coordinate_t p;
    p.x = 0;
    p.y = 0;

    init(c, s, p);

}

Shape::Shape(rgbColor_t c) {

    style_t s = SHAPE_STYLE_NORM;

    coordinate_t p;
    p.x = 0;
    p.y = 0;

    init(c, s, p);

}

Shape::Shape(rgbColor_t c, style_t s) {

    coordinate_t p;
    p.x = 0;
    p.y = 0;

    init(c, s, p);

}

Shape::Shape(rgbColor_t c, style_t s, coordinate_t p) {

    init(c, s, p);

}

void Shape::init(rgbColor_t c, style_t s, coordinate_t p) {

    this->color = c;
    this->position = p;
    this->style = s;
    this->size = 1.0f;
    this->typeLabel = "Shape";

}

/* toString() outputs a string summary of the shape object */
std::string Shape::toString() {

    // Create string stream for all appropriate properties
    std::stringstream ss;

    ss << typeLabel << " { ";
    ss << "Size: " << size;
    ss << "; Style: " << style_t_desc[style];
    ss << "; Color: (" << color.red << "," << color.green << "," << color.blue << ")";
    ss << "; Position: (" << position.x << "," << position.y << ")";
    ss << "}" << "\n";

    return ss.str();

}

rgbColor_t Shape::getColor() {

    return this->color;

}

std::string Shape::getStyle() {

    return style_t_desc[style];

}

coordinate_t Shape::getPosition() {

    return this->position;

}

std::string Shape::getType() {

    return this->typeLabel;

}

void Shape::setColor(rgbColor_t c) {

    this->color = c;

}

void Shape::setStyle(style_t s) {

    this->style = s;

}

void Shape::setPosition(coordinate_t p) {

    this->position = p;

}

float Shape::getSize() {

    return this->size;

}

void Shape::setSize(float s) {

    this->size = s;

}

/* define() prompts user to enter details of shape */
void Shape::define() {

    // size, position, style, color
    std::cout << "Creating a new " << typeLabel << std::endl;

    std::cout << "Enter size (inches)";
    while ( !(std::cin >> this->size)) {

        // Test for bad input type
        std::cout << "Not an number. Enter size (inches): " << std::endl;
        std::cin.clear();                // reset fail flag
        std::cin.ignore (1000, '\n');    // skip past last input

    }

    coordinate_t input_coord;
    std::cout << "Enter position (integer x)";
    while ( !(std::cin >> input_coord.x)) {

        // Test for bad input type
        std::cout << "Not an integer. Enter position (integer x): " << std::endl;
        std::cin.clear();                // reset fail flag
        std::cin.ignore (1000, '\n');    // skip past last input

    }

    std::cout << "Enter position (integer y)";
    while ( !(std::cin >> input_coord.y)) {

        // Test for bad input type
        std::cout << "Not an integer. Enter position (integer y): " << std::endl;
        std::cin.clear();                // reset fail flag
        std::cin.ignore (1000, '\n');    // skip past last input

    }
    this->position = input_coord;

    rgbColor_t input_color;
    std::cout << "Enter color (red component)";
    while ( !(std::cin >> input_color.red)) {

        // Test for bad input type
        std::cout << "Not an integer. Enter color (red component): " << std::endl;
        std::cin.clear();                // reset fail flag
        std::cin.ignore (1000, '\n');    // skip past last input

    }
    std::cout << "Enter color (green component)";
    while ( !(std::cin >> input_color.green)) {

        // Test for bad input type
        std::cout << "Not an integer. Enter color (green component): " << std::endl;
        std::cin.clear();                // reset fail flag
        std::cin.ignore (1000, '\n');    // skip past last input

    }
    std::cout << "Enter color (blue component)";
    while ( !(std::cin >> input_color.blue)) {

        // Test for bad input type
        std::cout << "Not an integer. Enter color (blue component): " << std::endl;
        std::cin.clear();                // reset fail flag
        std::cin.ignore (1000, '\n');    // skip past last input

    }
    this->color = input_color;

    std::cout << "Enter style (normal, embossed or cartoon)";
    std::string input_style;
    std::cin >> input_style;
    if (input_style.compare("normal") == 0)
        this->style = SHAPE_STYLE_NORM;
    else if (input_style.compare("embossed") == 0)
        this->style = SHAPE_STYLE_EMBOSSED;
    else if (input_style.compare("cartoon") == 0)
        this->style = SHAPE_STYLE_CARTOON;
    else
        this->style = SHAPE_STYLE_NORM;

}

