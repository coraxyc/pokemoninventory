/* source code */
#include "lab.h"
int main(){
    srand(time(0));
    //std::string quit = "N;""
    pokemon newPokemon = pokemonGenerator();
    std::cout << newPokemon.name << std::endl;
    std::cout << newPokemon.fileName << std::endl;
    std::cout << newPokemon.gender << std::endl;
    std::cout << newPokemon.type << std::endl;
    std::cout << newPokemon.attempts << std::endl;
}
