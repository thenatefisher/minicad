/* 
 * File:   canvas_test.cpp
 * Author: Nate Fisher
 *
 * Unit and functional tests for the Circle and Canvas classes
 *
 * Created on Sep 19, 2011, 10:39:01 PM
 */

#include <stdlib.h>
#include <iostream>
#include <string>
#include <Circle.h>
#include <Canvas.h>

/*
 * Simple C++ Test Suite
 */

Shape* s1;
Shape* s2;
Canvas* c;

void circle_test() {

    std::cout << "canvas_test circle_test" << std::endl;

    s1 = new Circle();
    s2 = new Circle();

    if ((s1 == NULL) || sizeof(*s1) != sizeof(Shape))
        std::cout << "%TEST_FAILED% time=0 testname=canvas_test (circle_test) message=Can not create Circle Shapes" << std::endl;

}

void canvas_test() {

    std::cout << "canvas_test canvas_test" << std::endl;

    c = new Canvas();

    if ((c == NULL) || sizeof(*c) != sizeof(Canvas))
    std::cout << "%TEST_FAILED% time=0 testname=canvas_test (canvas_test) message=Can not create Canvas" << std::endl;

}

void addShape_test() {

    std::cout << "canvas_test addShape_test" << std::endl;

    if (!(c->addShape(s1) && c->addShape(s2)))
        std::cout << "%TEST_FAILED% time=0 testname=canvas_test (addShape_test) message=Can not add Shapes to Canvas" << std::endl;
    else
        std::cout << "Canvas now has " << c->count() << " objects." << std::endl;

    std::vector<Shape*> canvasShapes;
    Shape* s1Ptr;
    Shape* s2Ptr;

    canvasShapes = c->inventory();
    s1Ptr = canvasShapes.at(0);
    s2Ptr = canvasShapes.at(1);

    if ((s1 != s1Ptr) && (s2 != s2Ptr))
       std::cout << "%TEST_FAILED% time=0 testname=canvas_test (addShape_test) message=Pointer to shape saved in canvas is not pointing at the shape object" << std::endl;
    
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% canvas_test" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% circle_test (canvas_test)" << std::endl;
    circle_test();
    std::cout << "%TEST_FINISHED% time=0 circle_test (canvas_test)" << std::endl;

    std::cout << "%TEST_STARTED% canvas_test (canvas_test)" << std::endl;
    canvas_test();
    std::cout << "%TEST_FINISHED% time=0 canvas_test (canvas_test)" << std::endl;

    std::cout << "%TEST_STARTED% addShape_test (canvas_test)" << std::endl;
    addShape_test();
    std::cout << "%TEST_FINISHED% time=0 addShape_test (canvas_test)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

