#include "lab.h"

void drawCB(Fl_Cairo_Window*, cairo_t* cr) { 
    
    cairo_surface_t* cs = cairo_image_surface_create_from_png("logo.png");
    cairo_set_source_surface(cr,cs, (Width-125)/2, Height/9); 
    //cairo_rectangle(cr,Width/2, Height/4, 400,400);
    drawTrainer(cr);
    cairo_paint(cr);
    
    drawGenerator(cr);
   
    
    if(catchPressed == 1) {
	drawBall(cr);
    }
    if(animationEnd == true) {
	//note: did not have time to find poofy cloud
	//or run away marks
	//supplanted with other images
	//please replace
	if(caught == 1) {
	    drawCaptureSuccess(cr);
	} else if(caught == 2){
	    drawRanAway(cr);
	}
	
    } 
    //std::cout << "animationEnd" << animationEnd << std::endl;
    cairo_destroy(cr);
}
