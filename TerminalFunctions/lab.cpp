int main()
{
    /** TEMPORARY JUST FOR TESTING PURPOSES **/
    /** POKEMON INFO IS HARD-CODED IN **/
    int maxPokemon = 5;
    Pokemon *pokePointer = new Pokemon[maxPokemon]; //array of Pokemon
    pokePointer[0] = {"Pikachu","M","pikachu.png","electric",5};
    pokePointer[1] = {"Slowpoke","F","slowpoke.png","psychic",2};
    pokePointer[2] = {"Slowpoke","M","slowpoke.png","psychic",4};
    pokePointer[3] = {"Magikarp","M","magikarp.png","water",1};
    pokePointer[4] = {"Pikachu","F","pikachu.png","electric",3};
    /** *********************************** **/

/***************ONLY THINGS YOU WILL NEED TO PUT IN MAIN***********************/
    // calls all other functions that display input in terminal
    int *repeats = new int[maxPokemon]; //stores indices of duplicate Pokemon
    displayMenu(pokePointer,repeats,maxPokemon);
/************************************************************************/

}
