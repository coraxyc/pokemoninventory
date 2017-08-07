void displayPokemon(Pokemon p) {
    //displays all information elements of a single Pokemon
    std::cout << "Pokemon name: " << p.name << std::endl;
    std::cout << "Image file name: " << p.imageFileName << std::endl;
    std::cout << "Gender: " << p.gender << std::endl;
    std::cout << "Type: " << p.type << std::endl;
//    std::cout << "Catch probability: " << catchChance << std::endl;
//    std::cout << "Escape probability: " << escapeChance << std::endl;
    std::cout << "Number of Catch Attempts: " << p.attempts << "\n" << std::endl;
}
