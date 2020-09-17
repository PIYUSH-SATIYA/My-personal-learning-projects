#include<stdio.h>

int main(){
    int num, sum = 0, count = 1;
    printf("Enter an integer to which you wants to sum natural numbers from 1 :-");
    scanf("%d", &num);
    do
    {
        sum = sum + count;
        count++;
    } while (num>=count);
    printf("The sum of first %d natural numbers is :- %d", num, sum);
    return 0;
}