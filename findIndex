int findIndex(Pokemon p, Pokemon* a, int size) {
    if(p.name <= a[0].name) 
        return 0;
    for(int i = 0; i < size-2; i++) {
        if(p.name > a[i].name && p.name < a[i+1].name) 
            return i;
        if(a[i].name == "") {
            return i;
            break;
        }
    }
}
