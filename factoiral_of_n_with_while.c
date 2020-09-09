#include<stdio.h>

int main(){
      int num, fact=1, count=1;
    printf("Enter the number of which you wants to find factorial :- ");
    scanf("%d", &num);
    while(count<=num){
        fact=fact*count;
        count++;
    }
    printf("The factorial of %d is :- %d", num, fact);
    return 0;
}