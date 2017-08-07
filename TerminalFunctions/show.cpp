void show(Pokemon *pokePointer, int *repeats, int maxPokemon)
{   //finds index of specified Pokemon and displays Pokemon information
    int index, numPokemon; int counter = 0;
    std::string name = getPokemonName(pokePointer,maxPokemon);
    numPokemon = countPokemon(pokePointer,maxPokemon);
    index = find(pokePointer, name, 0, maxPokemon);

    while(index < numPokemon && index>=0) {
        repeats[counter] = index; //repeats[0] stores first occurrence and is not a repeat
        index = find(pokePointer, name, index+1, maxPokemon);
        counter++;
    }
    if(counter==0){
        std::cout << "\nThere are no matches for this Pokemon.\n" << std::endl;
    } else if(counter==1) {
        std::cout << "\nThere is one match for this Pokemon.\n" << std::endl;
    } else if(counter>1) {
        std::cout << "\nThere are " << counter <<" matches for this Pokemon.\n" << std::endl;
    }
    for(int i=0; i<counter; i++) {
        std::cout << "Match (" << i+1 << "):" << std::endl;
        index = repeats[i];
        displayPokemon(pokePointer[index]);
    }

}
