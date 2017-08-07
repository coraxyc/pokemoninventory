#include "lab.h"

void drawCB(Fl_Cairo_Window*, cairo_t* cr) { 
    //didn't name first one because not used
    //cairo_set_source_rgb(cr,1,1,1);
    cairo_surface_t* cs = cairo_image_surface_create_from_png("logo.png");
    cairo_set_source_surface(cr,cs, (Width-125)/2, Height/9); 
    //cairo_rectangle(cr,Width/2, Height/4, 400,400);
    cairo_paint(cr);
    drawGenerator(cr);
    drawBall(cr);
    cairo_destroy(cr);
}
