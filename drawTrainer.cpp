#include "lab.h"
void drawTrainer(cairo_t* cr){
    //draw trainer@ location
    cairo_save(cr);
    cairo_surface_t* cs
    = cairo_image_surface_create_from_png("trainer1.png"); // returns cairo surface type; converts character to string
    cairo_set_source_surface(cr,cs, Width/4, Height/4); 
    cairo_paint(cr);
    cairo_restore(cr);
}
