#include <iostream>
#include <string>

struct Pokemon {
	std::string name;
	std::string gender; // stores only ��F�� or ��M��
	std::string imageFileName;
	std::string type; // types entered as a string
	// double catchChance;
	// double escapeChance;
	int attempts; // number of attempts to catch the pokemon
};
void addPokemon(Pokemon*,int,std::string,std::string,std::string,std::string,int);
void displayMenu(Pokemon*,int);
void displayChoices();
void remove(Pokemon*,int);
void show(Pokemon*,int);
int find(Pokemon*,int);
void list(Pokemon*,int);
void displayPokemon(Pokemon);
int countPokemon(Pokemon*,int);

/** TEMPORARY JUST FOR TESTING PURPOSES **/
void addPokemon(Pokemon pokePointer[],int index,std::string name,std::string gender, std::string imageFileName,std::string type,int attempts)
{
    pokePointer[index].name = name;
    pokePointer[index].gender = gender;
    pokePointer[index].imageFileName = imageFileName;
    pokePointer[index].type = type;
    pokePointer[index].attempts = attempts;
}
/************************************************************************/
int main()
{
    /** TEMPORARY JUST FOR TESTING PURPOSES **/
    /** POKEMON INFO IS HARD-CODED IN **/
    int maxPokemon = 5;
    Pokemon *pokePointer = new Pokemon[maxPokemon]; //array of Pokemon
    addPokemon(pokePointer,0,"Pikachu","M","pikachu.png","electric",5);
    addPokemon(pokePointer,1,"Slowpoke","F","slowpoke.png","psychic",2);
    addPokemon(pokePointer,2,"Magikarp","M","magikarp.png","water",1);
    /** *********************************** **/

/***************ONLY THING YOU NEED TO PUT IN MAIN***********************/
    displayMenu(pokePointer,maxPokemon);
/************************************************************************/

}
/************************************************************************/

void displayMenu(Pokemon *pokePointer,int maxPokemon)
{
    char choice;
    std::string loop;
    std::cout << "Welcome to your Pokedex! This is where you will find your inventory," << std::endl;
    std::cout << "which includes a collection of all the Pokemon that you've previously caught.\n" << std::endl;

    do{
        displayChoices(); //displays delete, show, find, and list choices
        std::cin >> choice;
        std::cout << "\n";
        while(choice!='R' && choice!='S' && choice!='L' ) {
            //works only for uppercased letters
            std::cout << "Please enter a valid input." << std::endl;
            displayChoices(); //displays delete, show, and list choices
        }
        switch(choice) {
            case 'R' :
                remove(pokePointer,maxPokemon);
                break;
            case 'S' : show(pokePointer,maxPokemon);
                break;
            case 'L' : list(pokePointer,maxPokemon);
                break;
        }
        std::cout << "Would you like to continue? (Y/N) ";
        std::cin>>loop;
        std::cout << "\n";
    } while(loop=="Y");
}
void displayChoices()
{
    std::cout << "\t To (R)emove one or multiple Pokemon, press \"R\"." << std::endl;
    std::cout << "\t To (S)how a specified Pokemon, press \"S\"." << std::endl;
    std::cout << "\t To (L)ist all the Pokemon in your inventory, press \"L\".\n" << std::endl;
}
void remove(Pokemon *pokePointer, int maxPokemon)
{   //WARNING: does not actually delete an element of the Pokemon array:
    //removes designated Pokemon by shifting all elements to the left to override
    //data of chosen Pokemon to delete;
    //erases contents of last element but last element still exists with empty values
    int numPokemon = countPokemon(pokePointer,maxPokemon);
    int index = find(pokePointer,maxPokemon); //determine location of pokemon to delete
    if(index>=0){
        std::string name = pokePointer[index].name;
        for(int i = index; i<numPokemon; i++) {
            //fill in space of deleted pokemon
            //and move all elements to the left
            pokePointer[i] = pokePointer[i+1];
        }
        //erase contents of last element in Pokemon array
        pokePointer[numPokemon-1].name = "";
        pokePointer[numPokemon-1].gender = "";
        pokePointer[numPokemon-1].imageFileName = "";
        pokePointer[numPokemon-1].type = "";
        pokePointer[numPokemon-1].attempts = 0;

        std::cout<<"Pokemon " << name << " has been transferred out of your Pokedex.\n" << std::endl;
    }
}
void show(Pokemon *pokePointer, int maxPokemon)
{
    int index = find(pokePointer, maxPokemon);
    if(index>=0) displayPokemon(pokePointer[index]);
}
int find(Pokemon *pokePointer, int maxPokemon)
{   //returns index of Pokemon in Pokemon array
    int numPokemon = countPokemon(pokePointer,maxPokemon);
    int index = -1;
    std::string name;
    std::cout << "What is the name of the Pokemon? ";
    std::cin >> name;
    do{
        for(int i=0; i < numPokemon;i++) {

/*************optimize searching method later with binary search****************/
            if(name==pokePointer[i].name) {
                index = i;
                std::cout<< "Pokemon found.\n" << std::endl;
            }
        }
        if(index<0) {
            std::cout<< "This Pokemon does not exist in your Pokedex." <<std::endl;
            std::cout<< "Please enter a valid Pokemon name or press (Q) to quit." <<std::endl;
            std::cin>> name;
            std::cout<<"\n";
        }
    } while(index<0 && name!="Q");
    return index; //returns index of Pokemon in array
}
void list(Pokemon *pokePointer, int maxPokemon)
{
    int numPokemon = countPokemon(pokePointer,maxPokemon);
    for(int i=0; i<numPokemon; i++) {
        displayPokemon(pokePointer[i]);
    }
}
void displayPokemon(Pokemon p) {
    std::cout << "Pokemon name: " << p.name << std::endl;
    std::cout << "Image file name: " << p.imageFileName << std::endl;
    std::cout << "Gender: " << p.gender << std::endl;
    std::cout << "Type: " << p.type << std::endl;
//    std::cout << "Catch probability: " << catchChance << std::endl;
//    std::cout << "Escape probability: " << escapeChance << std::endl;
    std::cout << "Number of Catch Attempts: " << p.attempts << "\n" << std::endl;
}

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
