/* 
 * File:   Canvas.cpp
 * Author: Nate Fisher
 * 
 * Created on September 19, 2011, 10:12 PM
 */

#include <Canvas.h>

Canvas::Canvas() {}

Canvas::Canvas(const Canvas& orig) {}

Canvas::~Canvas() { /* vector class handles removing shapes */}

int Canvas::count() {

    return items.size();
    
}

std::vector<Shape*> Canvas::inventory() {

    return items;

}

bool Canvas::addShape(Shape* s) {

    // Check for null pointer
    if (s == NULL)
        return false;

    // create tmp Shape ptr array
    items.push_back(s);

    // return valid
    return true;

}

bool Canvas::removeShape(Shape* s) {

    // Check for null pointer
    if (s == NULL)
        return false;

}