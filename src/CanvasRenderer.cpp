/* 
 * File:   CanvasRenderer.cpp
 * Author: Nate Fisher
 * 
 */

#include <CanvasRenderer.h>
#include <iostream>
#include <sstream>

CanvasRenderer::CanvasRenderer() {}

CanvasRenderer::CanvasRenderer(Canvas* c) {

    // check for null pointer; set canvas
    if (c != NULL) canvas = c;

}

CanvasRenderer::CanvasRenderer(const CanvasRenderer& orig) { /* this is for cloning */ }

CanvasRenderer::~CanvasRenderer() {

    // We could delete the canvas, but that's probably not expected by
    // the Caller
    
    // delete[] canvas;
    
}

bool CanvasRenderer::render(renderType_t r) {

    // handle null pointer
    if (canvas == NULL) return false;

    // render with chosen method
    switch(r) {
        case CNV_RDR_TYPE_ASCII:
            return this->render_ascii();
        case CNV_RDR_TYPE_SUMMARY:
            return this->render_summary();
        case CNV_RDR_TYPE_GUI:
            return this->render_gui();
        default:
            return false;
    }

}

bool CanvasRenderer::render_summary() {

    std::stringstream ss;

    ss << "\n\nCanvas Summary: " << std::endl;
    ss << "\tCreated " << canvas->count() << " Objects" << std::endl;

    for (int i = 0; i < canvas->count(); i++) {
        ss << "\t" << canvas->inventory().at(i)->toString();
    }

    std::cout << ss.str();
    return true;

}

bool CanvasRenderer::render_ascii() {

    /* Homework! */
    return false;

}

bool CanvasRenderer::render_gui() {

    /* Homework! */
    return false;

}
