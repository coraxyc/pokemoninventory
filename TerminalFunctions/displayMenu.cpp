void displayMenu(Pokemon *pokePointer, int *repeats, int maxPokemon)
{   //introduces user to Pokedex inventory, allows user explore inventory
    //by selecting R, S, L, or Q to remove, show, list, or quit, respectively
    char choice;
    char loop;
    std::cout << "Welcome to your Pokedex! This is where you will find your inventory," << std::endl;
    std::cout << "which includes a collection of all the Pokemon that you've previously caught.\n" << std::endl;
    do{
        displayChoices(); //displays delete, show, find, and list choices
        std::cin >> choice;
        choice = toupper(choice);
        std::cout << "\n";
        while(choice!='R' && choice!='S' && choice!='L' && choice!='Q') {
        //check whether or not user has entered R, S, L, or Q
            std::cout<< "Please enter a valid input." << std::endl;
            displayChoices(); //displays delete, show, and list choices
            std::cin >> choice;
            choice = toupper(choice);
        }
        switch(choice) {
            case 'R' :
                remove(pokePointer,repeats,maxPokemon);
                break;
            case 'S' : show(pokePointer,repeats,maxPokemon);
                break;
            case 'L' : list(pokePointer,maxPokemon);
                break;
            case 'Q' : return;
        }
        std::cout << "Would you like to return to the menu? (Y/N): ";
        std::cin>> loop;
        std::cout << std::endl;
        loop = toupper(loop);
        while(loop!='N' && loop!='Y') {
        //checks whether or not user enters N or Y
            std::cout<< "Please enter a valid input." << std::endl;
            std::cout << "Would you like to return to the menu? (Y/N): ";
            std::cin >> loop;
            loop = toupper(loop);
            std::cout << std::endl;
        }
    } while(loop!='N');
}
