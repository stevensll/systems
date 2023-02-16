#include <stdio.h>

int three_five(int threshold){
    int sum = 0; 
    threshold-=1;
    while(threshold > 0){
        if(threshold % 5 ==0 || threshold % 3 == 0){
            sum+=threshold;

        }
        threshold--;
    }
    return sum;
}

int smallest_multiple(int number){
    int counter = 1;
    int found = 1;
    int status = 0;

    while(status == 0){
        found = 1;
        int i = 1;
        for(int i = 1; i < number; i++){
            if(counter % i != 0){
                found = 0;
            }
        }
        if(found ==1){
            found = counter;
            status =1;
        } else{
            counter++;
        }

    }
    return found;

}

int sum_square_difference(int number){
    double sum_squares = 0;
    double square_sum = 0;
    int i = 1;
    for(int i = 1; i <= number; i++){
        sum_squares+= i * i;
        square_sum+=i;
    }
    square_sum = square_sum * square_sum;
    // mathematical approach
    // double sum_squares = number * (number + 1) *(2*number+1) / 6.0
    // double square_sum = pow(number*(number+1) / 2.0 , 2)
    // printf("%lf\n",sum_squares);
    // printf("%lf\n",square_sum);
    return square_sum - sum_squares;
}