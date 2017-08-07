#include "config.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <Fl/Fl_Cairo_Window.H>
#include <Fl/Fl_Button.H>
#include <FL/Fl_Multiline_Output.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl.H>
const int Width = 500;
const int Height = 500;

struct pokemon{
    std::string name;
    std::string fileName;
    std::string gender;
    std::string type;
    int catchProb;
    int escapeProb;
};

enum pokemonList{bulbasaur, charmander, squirtle, ratatta, pikachu, wailmer};
extern pokemonList p;
const std::string pokemonFileName[]{"bulbasaur.png","charmander.png","squirtle.png", "ratatta.png", "pikachu.png", "wailmer.png"};
const std::string pokemonType[]{"grass","fire","water","grass","electric","water"};
const std::string pokemonName[]{"bulbasaur","charmander","squirtle", "ratatta", "pikachu", "wailmer"};
pokemon pokemonGenerator();

void drawCB(Fl_Cairo_Window*, cairo_t* cr);
void generatorCB(void*b);
void b1CB(Fl_Widget*b,void*);
int pokemonCaught();
void drawGenerator(cairo_t* cr);
void throwCB(void*b);
void b2CB(Fl_Widget*b,void*);
Fl_Button* displayCatchCB(Fl_Button* bp);
void drawBall(cairo_t* cr);
extern int catchProb; //created since can't pass in more parameters to CB functions
extern int escapeProb;
extern int caught;
void printOutput(std::string a);
//extern Fl_Multiline_Output *console;
extern Fl_Button pokecatchB;
extern Fl_Text_Buffer *buff;
extern Fl_Text_Display *disp;
