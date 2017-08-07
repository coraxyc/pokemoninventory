#include "lab.h"
pokemonList p;
int catchProb;
int escapeProb;
//creates a random integer, has a switch where different pokemon
//are selected based on the random integer 
pokemon pokemonGenerator(){
    pokemon newPokemon;
    int random;
    random = rand() % 9 + 1;
    std::string gender;
    std::cout << random << std::endl;
    switch(random) {
	case 1:
	case 2:
	    p = bulbasaur;
	    catchProb = rand() % 11 + 50; //prob 50-60
	    escapeProb = rand() % 11 + 10;//prob 10-20
	    break;
	case 3:
	case 4:
	    p = charmander;
	    catchProb = rand() % 11 + 50; //prob 50-60
	    escapeProb = rand() % 11 + 10;//prob 10-20
	    break;
	case 5:
	case 6: 
	    p = squirtle;
	    catchProb = rand() % 11 + 50; //prob 50-60
	    escapeProb = rand() % 11 + 10;//prob 10-20
	    break;
	case 7:
	    p = ratatta;
	    catchProb = rand() % 11 + 70; //prob 70-80
	    escapeProb = rand() % 11 + 50;//prob 50-60
	    break;
	case 8: 
	    catchProb = rand() % 21 + 50; //prob 50-70
	    escapeProb = rand() % 11 + 10;//prob 10-20
	    p = pikachu;
	    break;
	case 9:
	    catchProb = rand() % 11 + 40; //prob 40-50
	    escapeProb = rand() % 11 + 10;//prob 10-20
	    p = wailmer;
	    break;
	    
    }
    
    if(random % 2 == 0) {
	gender = "F";
    } else {
	gender = "M";
    }
    
    newPokemon.name = pokemonName[p];
    newPokemon.fileName = pokemonFileName[p];
    newPokemon.type = pokemonType[p];
    newPokemon.catchProb = catchProb;
    newPokemon.escapeProb = escapeProb;
    newPokemon.gender = gender;
    return newPokemon;
}
