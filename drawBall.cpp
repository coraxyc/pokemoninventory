#include "lab.h"
void drawBall(cairo_t* cr){
    cairo_save(cr);
    cairo_surface_t* ci; 
    ci = cairo_image_surface_create_from_png("poke-ball.png"); // returns cairo surface type; converts character to string
    cairo_set_source_surface(cr,ci, Width/2, Height/4); 
    cairo_paint(cr);
    cairo_restore(cr);
}
