#include <stdio.h>



int main(){
    int arr_print(int *arr, int size);
    float arr_avg(int *arr, int size);
    int arr_copy(int *arr, int *copy, int size);   

    int a[10] = {1,20,34,41,24,81,17,8,79,10};
    int b[10] = {1,1,1,1,1,1,1,1,1,1};
    printf("Array A: ");
    arr_print(a,10);
    
    printf("Avg of array A: %.2f\n", arr_avg(a, 10));
    
    printf("Array B before copying array A: ");
    arr_print(b,10);
    arr_copy(a,b,10);
    printf("Array B after copying array A: ");
    arr_print(b,10);
    printf("Array A after: ");
    arr_print(a,10);
return 0;
}

int arr_print(int *arr, int size){
    int i;
    printf("[");
    for(i = 0; i < size; i++){
        printf(" %d", arr[i]);
    }
    printf(" ]\n");
    return 0;
}

float arr_avg(int *arr, int size ){
    int i;
    float sum;
    for(i = 0; i < size; i++){
        sum+=arr[i];
    }
    return (sum / size);
}

int arr_copy(int *arr, int *copy, int size){
    int i;
    for(i = 0 ; i < size; i++){
        copy[i] = arr[i];
    }
    return 0;
}