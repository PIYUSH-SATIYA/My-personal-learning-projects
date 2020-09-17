#include<stdio.h>

int main(){
    int sum = 0, num, count = 1;
    printf("Enter an integer to which you wants to sum natural numbers from 1 :-");
    scanf("%d", &num);
    while(count <= num){
        sum = sum + count;
        count++;
    }
    printf("The sum of first %d natural number is :- %d", num, sum);
    return 0;
}