void remove(Pokemon *pokePointer, int *repeats,int maxPokemon)
{   //WARNING: does not actually delete an element of the Pokemon array:
    //removes designated Pokemon by shifting all elements to the left to override
    //data of chosen Pokemon to delete;
    //erases contents of last element but last element still exists with empty values
    int number, index; std::string name;
    int numPokemon = countPokemon(pokePointer,maxPokemon);
    show(pokePointer, repeats, maxPokemon);
    if(repeats[1]!=0) {
        //checks if repeats exist, where repeat[1] stores the second occurrence of a Pokemon
        std::cout<<"Which one of these would you like to delete? " <<std::endl;
        std::cout<<"Please type in the corresponding number: ";
        std::cin >> number;
        index=repeats[number-1];
        while(pokePointer[index].name==""){ //checks if typed number refers to valid Pokemon
            std::cout<<"Pokemon number " << number << " does not exist.";
            std::cout<<"Please type in a valid number that corresponds to a duplicate Pokemon: ";
            std::cin >> number;
            index=repeats[number-1];
        }
    } else { //when there are no duplicates
        index = repeats[0]; //repeats[0] stores index of first and
        //only occurrence of Pokemon that do not have duplicates
    }
    if(index>=0){
        name = pokePointer[index].name;
        for(int i = index; i<numPokemon-1; i++) {
            //fill in space of deleted pokemon
            //and move all elements to the left
            pokePointer[i] = pokePointer[i+1];
        }
        //erase contents of last element in Pokemon array
        //by changing contents to
        //empty string literals and 0's
        //for strings and integers respectively
        pokePointer[numPokemon-1].eraseElements();
    /*  pokePointer[numPokemon-1].name = "";
	    pokePointer[numPokemon-1].gender = "";
	    pokePointer[numPokemon-1].imageFileName = "";
	    pokePointer[numPokemon-1].type = "";
	    attempts = 0;
    */
        for(int i=0; i<maxPokemon; i++) {
            repeats[i] = 0; //cleans out array storing indices of Pokemon repeats
        }
        std::cout<<"Pokemon " << name << " has been transferred out of your Pokedex.\n" << std::endl;
    }
}
