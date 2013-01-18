/* 
 * File:   CanvasRenderer.h
 * Author: Nate Fisher
 *
 * Created on September 19, 2011, 11:28 PM
 */

#ifndef CANVASRENDERER_H
#define	CANVASRENDERER_H

#include <Canvas.h>

enum renderType_t { CNV_RDR_TYPE_ASCII, CNV_RDR_TYPE_SUMMARY, CNV_RDR_TYPE_GUI };

class CanvasRenderer {
    
    public:

        CanvasRenderer();

        CanvasRenderer(Canvas* c);

        CanvasRenderer(const CanvasRenderer& orig);

        virtual ~CanvasRenderer();

        bool render(renderType_t r);

    private:

        bool render_summary();

        bool render_ascii();

        bool render_gui();

        Canvas* canvas;

};

#endif	/* CANVASRENDERER_H */

