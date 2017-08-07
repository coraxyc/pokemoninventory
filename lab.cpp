/* source code */
//to run use 
//g++ --std=c++11 -I ~/fltk-1.3.3 *.cpp -o pokemon `fltk-config --cxxflags --ldflags --use-cairo`

#include "lab.h"

int main(){
    srand(time(0)); //resetting the random 
    //creating cairo stuff
    Fl_Cairo_Window cw(Width, Height);
    cw.set_draw_cb(drawCB);
    cw.color(FL_LIGHT3);
    cw.label("Pokemon!");
    Fl_Button pokegenB(Width*.2, Height*.5, Width*.31, Height * .1, "Pokemon finding");
    pokegenB.callback(b1CB); //callback function
    Fl_Button pokecatchB(Width*.2, Height *.6, Width*.1,Height*.1, "Catch");
    pokecatchB.callback(b2CB);
    cw.show();
    Fl::run();
    
}
