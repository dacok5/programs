// Ovu funkciju trebate implementirati. Funkcija prima dva polja znakova i 
// vraca 1 ako prvi string sadrzi drugi string bilo gdje unutar sebe.
// Vraca -1 ako ne sadrzi
int substring(char* string, char* filter) {
    int i, j;
    for (i = 0; string[i] != '\0'; i++) {
        for (j = 0; filter[j] != '\0'; j++) {
            if (string[i + j] != filter[j]) {
                break;
            }
        }
        if (j == strlen(filter))
            return 1;
    }
    return -1;
}
