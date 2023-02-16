#include <stdio.h>

int mystrlen( char *s ){
    int count = 0;
    int i;
    for( i = 0; s[i]!='\0'; i++){
        count++;
    }
    return count;
}
char * mystrcpy( char *dest, char *source ){
    int i; 
    for(i = 0; source[i]!='\0'; i++){
        dest[i] = source[i];
    }
    //make sure null value is copied
    dest[i] = '\0';
    return dest;
}

char * mystrncpy( char *dest, char *source, int n){
    int i;

    for(i = 0; n > 0 && source[i]; i++){
        dest[i] == source[i];
        n--;
    }
    while(n-- >0){
        dest[i] = 0;
    }

    return dest;
}
char * mystrcat( char *dest, char *source ){
    char * ret = dest;
    while(*dest) (dest++);
    while(*(source)){
        *dest = *source;
        dest++;
        source++;
    }
    *dest = 0;
    return ret;
}

int mystrcmp( char *s1, char *s2 ){
    while( *s1 ){
        if (*s2 == '\0' ||*s1 > *s2 ) return 1;
        else if (*s1 < *s2) return -1;
        s1++;
        s2++;
    }
    if (*s1 == *s2) return 0;
    return -1;

}
char * mystrchr( char *s, char c ){
    while(*s){
        if(*s == c){
            return s;
        }
        s++;
    }
    if (c=='\0' && *s =='\0'){
        return s;
    }
    return NULL;
}
