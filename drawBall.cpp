#include "lab.h"
void drawBall(cairo_t* cr){
    //ok parabola
    cairo_save(cr);
    const int trainerWidth = 80;
    const int pokemonWidth = 96;
    static int tx = 0; static int ty = -10; //-10 is kind of arbitrary
    //based on the starting value (y-int of parabola)that I calculated (please change if need)
    static int px = (Width)/2.5;
    static int py = (Height)/3.5;
    int midpoint = ((Width/1.7) - (Width/4+trainerWidth))/2; 
    //midpoint between trainer and pokemon
    if(animationEnd == true){ //if animation is ended
	//resetting variables
	catchPressed = 0;
	tx = 0; ty = 0;
	px = Width/2.5;
	py = Height/3.5;
    } else {
	cairo_translate(cr,tx,ty); tx++;
	if(tx > midpoint){
	    //if greater than midpoint y value needs to increase
	    ty = -(-0.005*(tx - midpoint)*(tx - midpoint) + 20);
	} else if (tx <= midpoint){
	    //if less than midpoint y value needs to decrease
	    ty = 0.005*(tx - midpoint)*(tx - midpoint)- 20;
	    if(tx==midpoint){
		std::cout << "ty" << ty << std::endl;
	    }
	    
	}
	
	//std::cout << "ty" << ty << std::endl;
	
    }
    cairo_surface_t* ci; 
    ci = cairo_image_surface_create_from_png("poke-ball.png"); // returns cairo surface type; converts character to string
    //cairo_scale(cr,tx,ty); tx++; ty++;
    cairo_set_source_surface(cr,ci, px, py); 
    cairo_paint(cr);
    cairo_restore(cr);
    
    //cairo_save(cr);
    //cairo_restore(cr); //only applies to one transformation and not other objects
}
