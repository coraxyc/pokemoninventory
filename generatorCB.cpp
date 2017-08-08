#include "lab.h"
void generatorCB(void*b) {
    catchPressed = 0;
    animationEnd = false;
    pokecatchB.show();
    //generates a new pokemon
    Fl_Button* bp = (Fl_Button*)b;
    bp->parent()->redraw();
    pokemon newPokemon = pokemonGenerator();
    /* std::cout << newPokemon.name << std::endl;
    std::cout << newPokemon.fileName << std::endl;
    std::cout << newPokemon.gender << std::endl;
    std::cout << newPokemon.type << std::endl;
    std::cout << "catch prob" <<  newPokemon.catchProb << std::endl;
    std::cout << "escape prob" << newPokemon.escapeProb << std::endl;
    */
    std::string values = newPokemon.name + "\n" + newPokemon.gender + "\n" + newPokemon.type
    + "in 1842 potatoes ate some munchkins \n great \n 2 great \n 3great \n 4 great \n 5great";
    buff->text(values.c_str());
    //console->value(values.c_str());

}

void b1CB(Fl_Widget*b,void*){
    Fl::add_timeout(0.01,generatorCB,b);
}
