#include "lab.h"
void generatorCB(void*b) {
    //generates a new pokemon
    Fl_Button* bp = (Fl_Button*)b;
    bp->parent()->redraw();
    pokemon newPokemon = pokemonGenerator();
    std::cout << newPokemon.name << std::endl;
    std::cout << newPokemon.fileName << std::endl;
    std::cout << newPokemon.gender << std::endl;
    std::cout << newPokemon.type << std::endl;
    std::cout << "catch prob" <<  newPokemon.catchProb << std::endl;
    std::cout << "escape prob" << newPokemon.escapeProb << std::endl;
}

void b1CB(Fl_Widget*b,void*){
    Fl::add_timeout(0.01,generatorCB,b);
}
