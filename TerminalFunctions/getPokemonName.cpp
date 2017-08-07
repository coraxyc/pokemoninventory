std::string getPokemonName(Pokemon *pokePointer,int maxPokemon)
{
    int index; std::string name;
    do{
        std::cout << "What is the name of the Pokemon? ";
        std::cin >> name;
        name[0] = toupper(name[0]); //in case user types in entirely lower case name
        //perform cursory search to see if at least one exists to validate entered name;
        index = find(pokePointer, name, 0, maxPokemon);
        //prompts for valid Pokemon name if Pokemon is not found
        if(index<0) {
            std::cout<< "This Pokemon does not exist in your Pokedex." <<std::endl;
            std::cout<< "Please enter a valid Pokemon name or press (Q) to return to the menu:" <<std::endl;
            std::cin>> name;
            std::cout<<"\n";
        }
    } while(index<0 && name!="Q");
    return name;
}
