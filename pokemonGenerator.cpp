#include "lab.h"

void pokemonGenerator(){
    int random;
    random = rand() % 100 + 1;
    std::cout << random << std::endl;
    if(random >=0 && random < 20) {
	std::cout << "bulbasaur!" << std::endl;
    } else if(random >=20 && random <40) {
	std::cout << "charmander!" << std::endl;
    } else if(random >=40 && random <60){
	std::cout << "squirtle!" << std::endl;
    } else if(random >=60 && random <75){
	std::cout << "exeggutor!" << std::endl;
    } else if(random >=75 && random <85){
	std::cout << "pikachu!" << std::endl;
    } else if(random >=85 && random <=100){
	std::cout << "wailmer!" << std::endl;
    }
}
