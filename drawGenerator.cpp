#include "lab.h"
void drawGenerator(cairo_t* cr){
    cairo_save(cr);
    cairo_surface_t* cs
    = cairo_image_surface_create_from_png(pokemonFileName[p].c_str()); // returns cairo surface type; converts character to string
    cairo_set_source_surface(cr,cs, Width/2, Height/2); 
    cairo_paint(cr);
    cairo_restore(cr);
}
