#include "lab.h"
int caught;
void throwCB(void*b) {
    //problem boblem
    //caught = 0;
    Fl_Button* bp = (Fl_Button*)b;
    bp->show();
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
}
/*Fl_Button displayCatchCB(Fl_Button* bp) {
    std::cout << caught << std::endl;
    return bp;
}
*/
void b2CB(Fl_Widget*b,void*){
    Fl::add_timeout(0.01,throwCB,b);
}
