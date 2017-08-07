int find(Pokemon *pokePointer, std::string name, int start, int maxPokemon)
{   //returns index of Pokemon in Pokemon array using sequential search
    //since binary search cannot guarantee that all duplicates will be found
    int numPokemon = countPokemon(pokePointer,maxPokemon);
    int index = -1;
    while(start<numPokemon && start>=0) {
        if(pokePointer[start].name==name) {
            index = start;
            return index;
        } else {
            start++;
        }
    }
/*  8/04/2017 - CANNOT USE BINARY SEARCH BECAUSE DUPLICATES EXIST
//searches for index of Pokemon using binary search

    int end = numPokemon-1;
    int mid = 0;
    while(start <= end) {
        mid = (start+end)/2;
        if(pokePointer[mid].name < name) {
            start = mid+1;
        } else if(pokePointer[mid].name < name) {
            end = mid-1;
        } else {
            return mid;
        }
    }
*/
    return index; //returns index of Pokemon in array
}
