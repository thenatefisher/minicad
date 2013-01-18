/* 
 * File:   Canvas.h
 * Author: Nate Fisher
 *
 */

#ifndef CANVAS_H
#define	CANVAS_H

#include <Shape.h>
#include <vector>

class Canvas {

    public:

        Canvas();

        Canvas(const Canvas& orig);

        virtual ~Canvas();

        bool addShape(Shape* s);

        bool removeShape(Shape* s);

        std::vector<Shape*> inventory();

        int count();

    private:

        std::vector<Shape*> items;

};

#endif	/* CANVAS_H */

