/* 
 * File:   Circle.h
 * Author: Nate Fisher
 *
 */

#ifndef CIRCLE_H
#define	CIRCLE_H

#include <Shape.h>

class Circle : public Shape {

    public:
        
        Circle();

        Circle(rgbColor_t c);

        Circle(rgbColor_t c, style_t s);

        Circle(rgbColor_t c, style_t s, coordinate_t p);

        Circle(const Circle& orig);

        virtual ~Circle();
        
        std::string toString(); // virtual function in base class

        float area(); // not implemented in base class; required here

};

#endif	/* CIRCLE_H */

