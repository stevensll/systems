#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int main(){
    // 1
    int arr[10];
    // 2
    arr[0] = 0;
    // 3
    int i;
    srand(time(NULL));
    for(i = 1 ; i < 10; i++){
        arr[i] = rand()%100;
    }
    // 4
    for( i = 0; i < 10; i++){
        printf("Original[%d]: %d\n", i, arr[i]);
    }
    printf("\n");
    //5
    int arrp[10];
    //6
    int *ap = arr; 
    int *app =arrp;
    //7
    for( i = 9 ; i >= 0; i--){
        *(app + (9-i)) = *(ap + i); 
        // these two are equivalent!
        // app[9-i] = ap[i]; 
    }

    for(i = 0 ; i < 10; i++){
        printf("Copy[%d]: %d\n",i,arrp[i]);
    }

    printf("\n");
    return 0;
}