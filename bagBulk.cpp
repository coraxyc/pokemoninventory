int bagBulk(Pokemon* a, int size) {
    for(int i = 0; i < size; i++) {
        if(a[i].name == "") {
            return i;
        }
    }
    return size-1;
}

// cpp.sh/2qwib for example use
