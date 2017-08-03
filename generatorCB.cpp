#include "lab.h"
void generatorCB(Fl_Widget*) {
    pokemon newPokemon = pokemonGenerator();
    std::cout << newPokemon.name << std::endl;
    std::cout << newPokemon.fileName << std::endl;
    std::cout << newPokemon.gender << std::endl;
    std::cout << newPokemon.type << std::endl;
    std::cout << newPokemon.attempts << std::endl;
}
