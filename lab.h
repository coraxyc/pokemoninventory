#include "config.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <Fl/Fl_Cairo_Window.H>
#include <Fl/Fl_Button.H>

const int Width = 500;
const int Height = 500;

struct pokemon{
    std::string name;
    std::string fileName;
    std::string gender;
    std::string type;
    int attempts;
};

enum pokemonList{bulbasaur, charmander, squirtle, exeggutor, pikachu, wailmer};
extern pokemonList p;
const std::string pokemonFileName[]{"bulbasaur.png","charmander.png","squirtle.png", "alolanExeggutor.png", "pikachu.png", "wailmer.png"};
const std::string pokemonType[]{"grass","fire","water","grass","electric","water"};
const std::string pokemonName[]{"bulbasaur","charmander","squirtle", "exeggutor", "pikachu", "wailmer"};
const int pokemonAttempts[]{3,3,3,5,3,3};
pokemon pokemonGenerator();
void drawCB(Fl_Cairo_Window*, cairo_t* cr);
void generatorCB(Fl_Widget*);
