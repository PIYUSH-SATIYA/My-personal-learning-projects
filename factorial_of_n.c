#include<stdio.h>

int main(){
    int num, fact=1, count;
    printf("Enter the number of which you wants to find factorial :- ");
    scanf("%d", &num);
    for (count=1; count<=num; count++)
    {
        fact=fact*count;
    }
    printf("The factorial of %d is :- %d", num, fact);
    return 0;
}