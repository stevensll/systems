#include <stdio.h>

int main(){
    //1
    char c = 'c';   
    int i = 3;      
    long l = 2647;  
    printf("c: %c\t i: %d\tl: %ld\n\n", c, i, l);

    //2 
    printf("Hex address:\nchar : %p\tint: %p\t long: %p\n\n", &c, &i, &l);
    printf("Decimal adress: \nchar : %lu\tint: %lu\t long: %lu\n\n", &c, &i, &l);

    //3
    char *cp = &c;
    int *ip = &i;
    long *lp = &l;

    // 4
    printf("Pointer adress: c: %p\ti: %p\t long:%p\n\n", cp,ip,lp);
    
    //5
    // *ip+=1;
    // printf("i:%d\t ip: %d\n",i,*ip); <- changing by deref changes the original value )(think of *ip as getting to value)
    *ip +=5;
    *cp = 'n';
    *lp +=1;
    printf("New values: c: %c\ti: %d\tl: %ld\n\n",c, i ,l);

    //6
    unsigned int foo = 100;
    int *fooi = &foo;
    char *fooc = &foo;
    printf("Foo: %d\n", foo);

    //7
    printf("fooi: %p points to value: %d\nfooc: %p points to value: %c\n\n", fooi, *fooi, fooc, *fooc);

    //8
    printf("Foo hex: %x\nFoo decimal: %u\n\n", foo, foo);

    //9 
    printf("Hex bytes in foo:\n");
    int k;
    for(k = 0 ; k < 4; k++){
        printf("%hhx\t", *(fooc + k));
    }
    printf("\n");
    printf("Decimal bytes in foo:\n");
    for(k = 0 ; k < 4; k++){
        printf("%hhu\t", *(fooc + k));
    }
    printf("\n");

    //10
    printf("Hex bytes in foo+1:\n");
    for(k = 0 ; k < 4; k++){
        printf("%hhx\t", *((fooc + k)+1));
    }
    printf("\n");
    printf("Decimal bytes in foo+1:\n");
    for(k = 0 ; k < 4; k++){
        printf("%hhu\t", *((fooc + k)+1));
    }
    printf("\n");

    //11
        printf("Hex bytes in foo+16:\n");
    for(k = 0 ; k < 4; k++){
        printf("%hhx\t", *((fooc + k)+16));
    }
    printf("\n");
    printf("Decimal bytes in foo+16:\n");
    for(k = 0 ; k < 4; k++){
        printf("%hhu\t", *((fooc + k)+16));
    }
    printf("\n");

    return 0 ;
}