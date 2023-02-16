#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct song {int timestamp; char *name;};

void printSong(struct song *a){
    printf("Timestamp %ds into song %s", a->timestamp, a->name);
}

struct song * make_song(int timestamp, char *name){
    struct song *n = malloc(sizeof(struct song));
    n->timestamp = timestamp;
    n->name = name;
    return n;
}
int main(){
    srand(time(NULL));

    struct song *wallows = make_song(rand()%100, "Are You Bored Yet?\n");

    printSong(wallows);
    free(wallows);
}

