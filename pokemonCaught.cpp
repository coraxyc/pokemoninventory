#include "lab.h"
int pokemonCaught(){
    int caught = 0; //0 means not caught yet; 1 means caught; 2 means escaped
    int random1, random2; // 1-100 // 1-100
    random2 = rand() % 100 + 1;
    random1 = rand() % 100 +1;
    std::cout << "random1 " << random1 << std::endl;
    std::cout << "random2 " << random2 << std::endl;
    if(random2 > escapeProb) {
	if(random1 < catchProb) {
	    std::cout << "You caught it!"<<std::endl;
	    caught = 1;
	} else {
	    std::cout << "Whoops! You missed! Try again." << std::endl;
	    caught = 0;
	}
    } else {
	caught = 2;
	std::cout << "Oh no! The pokemon ran away." << std::endl;
    }
    return caught;
}
