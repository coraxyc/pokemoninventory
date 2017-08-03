/* source code */
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

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
