void add(Pokemon p, Pokemon* a, int size) {
    int index = findIndex(p, a, size);
    int top = bagBulk(a, size);
    while(top == size) {
        std::cout << "Your pokemon bag is full. "
            << "Please choose one pokemon to send back to the lab before adding anymore pokemon to your bag." 
            << std::endl;
        //list();
        //remove();
    }
    for(int i = top; i >= index; i--) {
        a[i+1]=a[i];
        if(i == index){
            a[i] = p;
            i--;
        }
    }
    for(int i = 0; i < size; i++) {
        std::cout << a[i].name << " " << a[i].gender << " " << a[i].attempts << std::endl;
    }
}

// cpp.sh/2qwib foor example use
