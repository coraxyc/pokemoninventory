#include "lab.h"
void drawCaptureSuccess(cairo_t* cr){
    //sets picture to big pearl if pokemon run a ways
    cairo_save(cr);
    cairo_surface_t* cs
    = cairo_image_surface_create_from_png("big-pearl.png"); // returns cairo surface type; converts character to string
    cairo_set_source_surface(cr,cs, Width/1.7, Height/4); 
    cairo_paint(cr);
    cairo_restore(cr);
}
