#include<stdio.h>
// git moded

int main(){
    int num, sum, count=1;
    printf("Enter an integer to which you wants to sum natural numbers from 1 :-");
    scanf("%d", &num);
    for(sum=0; num>=count; count++){
        sum = sum+count;
    }
    printf("The sum of first %d natural numbers is :- %d", num, sum);
    return 0;
}