#include <stdio.h>

int main(){

    printf("Hello world");
    int a;
    printf("These are types: %d %lf %f %ld %c %s %p", 3, 4.5, 213123.23232323, 2323223123221,'c', "hi", &a);
    printf("This might break: %c", '21903');
    printf("hello")
    return 0;
}