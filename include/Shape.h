/*
 * File:   Shape.h
 * Author: Nate Fisher
 *
 * This is a an abstract base class for the shape object. It has at least
 * one purely virtual method and therefor cannot be instantiated on it's own.
 *
 */

#ifndef SHAPE_H
#define	SHAPE_H

#include <iostream>
#include <string.h>
#include <miniCadStructures.h>

enum style_t { SHAPE_STYLE_EMBOSSED, SHAPE_STYLE_NORM, SHAPE_STYLE_CARTOON };

class Shape {

    private:

        rgbColor_t color;             // RGB color value

        style_t style;                // style for render output

        coordinate_t position;        // Center of object

        float size;

        void init(rgbColor_t c, style_t s, coordinate_t p);

    protected:

        std::string typeLabel;   // Human-readable description of type

    public:

        Shape();

        Shape(rgbColor_t c);

        Shape(rgbColor_t c, style_t s);

        Shape(rgbColor_t c, style_t s, coordinate_t p);

        void define();
        
        rgbColor_t getColor();
        
        std::string getStyle();

        coordinate_t getPosition();

        std::string getType();

        float getSize();

        void setSize(float s);

        void setColor(rgbColor_t c);

        void setStyle(style_t s);

        void setPosition(coordinate_t t);
        
        virtual std::string toString();

        virtual float area() = 0;

};

#endif	/* SHAPE_H */
