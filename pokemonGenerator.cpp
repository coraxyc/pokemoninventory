#include "lab.h"
pokemonList p;
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
	    break;
	case 3:
	case 4:
	    p = charmander;
	    break;
	case 5:
	case 6: 
	    p = squirtle;
	    break;
	case 7:
	    p = exeggutor;
	    break;
	case 8: 
	    p = pikachu;
	    break;
	case 9:
	    p = wailmer;
	    break;
	    
    }
    
    if(random%2 == 0) {
	gender = "F";
    } else {
	gender = "M";
    }
    newPokemon.name = pokemonName[p];
    newPokemon.fileName = pokemonFileName[p];
    newPokemon.type = pokemonType[p];
    newPokemon.attempts = pokemonAttempts[p];
    newPokemon.gender = gender;
    return newPokemon;
}
