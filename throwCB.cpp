#include "lab.h"
int caught;
int catchPressed;
bool animationEnd;
void throwCB(void*b) {
    //fps sec concept from vending
    const int fps = 12;
    const int sec = 8;
    //problem boblem
    //caught = 0;
    Fl_Button* bp = (Fl_Button*)b;
    bp->parent()->redraw();
    const int t2 = 0;
    static int t = 0;
    if(animationEnd == true) {
	t = 0;
	return;
    }
    if(t <= fps*sec) {
	t++;
	Fl::repeat_timeout(0.1/fps, throwCB,b);
	if(t < fps*sec){
	    //
	    animationEnd = false;
	    //std::cout <<"Hello" << std::endl;
	} else {
	    animationEnd = true;
	    /*if(animationEnd == true) {
		t = 0; //if you comment out t, the infinite loop is gone but 
		//the catch button does not function again
		//if you do not comment t out, t goes on an infinite loop
		//and the entire window is laggy
		//JUST KIDDING I FIXED IT
		std::cout << "greetings" << std::endl;
		return;
	    }*/
	    return;
	    
	}
	
    }
}
/*Fl_Button displayCatchCB(Fl_Button* bp) {
    std::cout << caught << std::endl;
    return bp;
}
*/
void b2CB(Fl_Widget*b,void*){
    caught = 0;
    catchPressed = 1;
    animationEnd = false;
    std::cout << "Hello" << std::endl;
    std::cout << catchProb << std::endl;
    std::cout << escapeProb << std::endl;
    if(caught == 0) {
	caught = pokemonCaught(); 
	if(caught == 1) {
	    pokecatchB.hide();
	    std::cout << "Caught it!" << std::endl;
	} else if (caught == 2) {
	    pokecatchB.hide();
	    std::cout << "Ran away, sorry!" << std::endl;
	}
    }
    if(animationEnd == false) {
	Fl::add_timeout(0.5,throwCB,b);
    } else {
	return;
    }
    
}
