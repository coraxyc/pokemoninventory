/* source code */
//to run use 
//g++ --std=c++11 -I ~/fltk-1.3.3 *.cpp -o pokemon `fltk-config --cxxflags --ldflags --use-cairo`

#include "lab.h"
Fl_Text_Buffer *buff = new Fl_Text_Buffer();
Fl_Text_Display *disp = new Fl_Text_Display(Width*.2,Height*.7,Width *.6,Height*.2);
//Fl_Multiline_Output *console= new Fl_Multiline_Output(Width*.2,Height*.7,Width *.6,Height*.2);
Fl_Button pokecatchB(Width*.2, Height *.6, Width*.1,Height*.1, "Catch");
int main(){
    srand(time(0)); //resetting the random 
    //creating cairo stuff
    Fl_Cairo_Window cw(Width, Height);
    cw.set_draw_cb(drawCB);
    cw.color(FL_LIGHT3);
    cw.label("Pokemon!");
    Fl_Button pokegenB(Width*.2, Height*.5, Width*.31, Height * .1, "Pokemon finding");
    pokegenB.callback(b1CB); //callback function
    
    pokecatchB.callback(b2CB);
    disp->buffer(buff);
    disp->scrollbar_align(FL_ALIGN_RIGHT);
    disp->scrollbar_width(5);
    cw.add(*disp);
    cw.resizable(*disp);
    cw.add(pokecatchB);
    //cw.add(console);
    cw.show();
    Fl::run();
}
