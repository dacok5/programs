/*Ovu funkciju trebate implementirati.Funkcija prima dva polja znakova i
vraca 1 ako prvi string sadrzi drugi string bilo gdje unutar sebe.
Vraca -1 ako ne sadrzi. */
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

// Ovu funkciju trebate implementirati. Funkcija prima polje znakova koje
// predstavlja filter prema kojem cete pretrazivati pjesme u playlisti i vratiti
// broj koliko ima pjesama koje u svom imenu sadrze trazeni string.
// Ovu provjeru obavljate koristenjem substring
// funkcije koju trebate implementirati iznad. 
int get_search_count(char* ss, Playlist* all) {
    int i, count = 0;
    for (i = 0; i < all->count; i++) {
        if (substring(all->tracks[i]->track, ss) == 1) {
            count++;
        }
    }

    return count;
}