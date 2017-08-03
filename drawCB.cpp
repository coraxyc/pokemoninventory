#include "lab.h"

void drawCB(Fl_Cairo_Window*, cairo_t* cr) { 
    //didn't name first one because not used
    cairo_set_source_rgb(cr,1,1,1);
    cairo_rectangle(cr,Width/2, Height/4, 400,400);
    cairo_fill(cr);
    cairo_surface_t* si; 
    si = cairo_image_surface_create_from_png(pokemonFileName[p].c_str()); // returns cairo surface type; converts character to string
    cairo_set_source_surface(cr,si, Width/2, Height/4); 
    cairo_paint(cr);
    
}
