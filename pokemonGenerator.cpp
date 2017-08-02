#include "lab.h"

void pokemonGenerator(){
    int random;
    random = rand() % 7 + 1;
    std::cout << random << std::endl;
    switch(random) {
	case 1:
	case 2:
	    std::cout << "bulbasaur!" << std::endl;
	    break;
	case 3:
	    std::cout << "charmander" << std::endl;
	    break;
	case 4: 
	    std::cout << "squirtle" << std::endl;
	    break;
	case 5:
	    std::cout << "exeggutor" << std::endl;
	    break;
	case 6: 
	    std::cout << "pikachu!" << std::endl;
	    break;
	case 7:
	    std::cout << "wailmer!" << std::endl;
	    break;
	    
    }
    /*
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
    */
}
