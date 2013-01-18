/* 
 * File:   Canvas.cpp
 * Author: Nate Fisher
 * 
 */

#include <Canvas.h>

Canvas::Canvas() {}

Canvas::Canvas(const Canvas& orig) { /* this is for cloning */ }

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

    // TODO: implement a way to remove the given shape
    // you may need to loop through items to find your 
    // target and then blast it away!

}