/* 
 * File:   main.cpp
 * Author: Nate Fisher
 *
 * miniCad demonstration app
 * See README for more details
 *
 * Created on September 19, 2011, 6:51 PM
 */

#include <cstdlib>
#include <iostream>
#include <Circle.h>
#include <Canvas.h>
#include <CanvasRenderer.h>

using namespace std;

/*
 * Main program loop
 */
int main(int argc, char** argv) {

    // Greet the user
    cout << "Welcome to MiniCad. ";

    // Create a new canvas
    Canvas* c = new Canvas();

    // Determine if user is completed with their design process
    bool finished = false;
    
    // Main application loop
    while (!finished) {

        // Create a generic shape pointer (we will use dynamic memory)
        Shape* s;

        // Prompt user to create a new shape
        cout << "What shape would you like to create?" << endl;

        // Which kind?
        cout << "\t (1) Circle (2) None, Finish Drawing "<< endl;

        // Record user input
        int shapeSelection = 0;
        while ( !(cin >> shapeSelection)) {

            // Test for bad input type
            cout << "Command not recognized! Try again." << endl;
            cin.clear();                // reset fail flag
            cin.ignore (1000, '\n');    // skip past last input

        }

        // Create the shape object
        switch(shapeSelection) {

            case 1:
                s = new Circle();
                break;

            case 2:
                finished = true;
                s = NULL;
                break;

            default:
                cout << "That was not an option." << endl;
                continue;

        } // End switch(shapeSelection)
        
        // Handle null pointer dereference situation
        if (s != NULL) {

            // Enter specific information for that shape
            s->define();

            // Add shape to canvas
            c->addShape(s);

            // Tell user what's up
            cout << "Shape created and added to canvas!" << endl;

        } else {

            cout << "No Shape Created." << endl;

        }

    } // End main application loop (bool finished == true)

    // Render the canvas
    if (c->count() > 0) {
        CanvasRenderer cr(c);
        if (!cr.render(CNV_RDR_TYPE_SUMMARY))
            cout << "Render Failure. Quitting" << endl;
    }

    return 0;
    
}

