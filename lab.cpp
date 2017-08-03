/* source code */
//to run use 
//g++ --std=c++11 -I ~/fltk-1.3.3 *.cpp -o pokemon `fltk-config --cxxflags --ldflags --use-cairo`

#include "lab.h"

int main(){
    //creating cairo stuff
    Fl_Cairo_Window cw(Width, Height);
    cw.color(FL_WHITE);
    cw.set_draw_cb(drawCB);
    Fl_Button pokegenB(Width*.10, Height*.30, Width*.31, Height * .1, "Pokemon finding");
    pokegenB.callback(generatorCB); //callback function
    srand(time(0)); //resetting the random 
    cw.show();
    Fl::run();
}
