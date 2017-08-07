int countPokemon(Pokemon *pokePointer, int maxPokemon)
{   //since the remove function does not actually remove Pokemon from the array
    //and only shifts array elements, counts actual total number of pokemon
    int counter = 0;
    for(int i=0; i<maxPokemon; i++) {
        if(pokePointer[i].name != "") { //tests whether or not name is empty
            counter++;
        }
    }
    return counter;
}
