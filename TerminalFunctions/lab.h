#include <iostream>
#include <string>

struct Pokemon {
//creates Pokemon datatype and stores information as elements
	std::string name;
	std::string gender; // stores only "F" or "M"
	std::string imageFileName;
	std::string type; // types entered as a string
	int attempts; // number of attempts to catch the pokemon

/***************************** ADD THIS FUNCTION TO POKEMON STRUCT 8/4/2017 13:11 PM *********************************/
	void eraseElements() {
    //erase contents of last element in Pokemon array
    //by changing contents to empty string literals and 0's
    //for strings and integers respectively
	    name = "";
	    gender = "";
	    imageFileName = "";
	    type = "";
	    attempts = 0;
	};
/***************************** ********** everything should work now ************** *********************************/
};
void displayMenu(Pokemon*,int*,int);
void displayChoices();
void remove(Pokemon*,int*,int);
void show(Pokemon*,int*,int);
int find(Pokemon*,std::string,int,int);
void list(Pokemon*,int);
void displayPokemon(Pokemon);
int countPokemon(Pokemon*,int);
std::string getPokemonName(Pokemon*,int);
