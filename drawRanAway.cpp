#include "lab.h"
void drawRanAway(cairo_t* cr){
    //set picture above to be alolanExeggutor if the pokemon runs away
    cairo_save(cr);
    cairo_surface_t* cs
    = cairo_image_surface_create_from_png("alolanExeggutor.png"); // returns cairo surface type; converts character to string
    cairo_set_source_surface(cr,cs, Width/1.8, Height/4); 
    cairo_paint(cr);
    cairo_restore(cr);
}
