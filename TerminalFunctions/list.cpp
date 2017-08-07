void list(Pokemon *pokePointer, int maxPokemon)
{   //displays information of all captured Pokemon
    std::cout<<"Here is a list of all the Pokemon that you currently have: \n"<<std::endl;
    int numPokemon = countPokemon(pokePointer,maxPokemon);
    for(int i=0; i<numPokemon; i++) {
        displayPokemon(pokePointer[i]);
    }
}
