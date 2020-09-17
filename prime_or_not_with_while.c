#include<stdio.h>

int main(){
    int num, div=2, remain;
    printf("Enter a number to check it is prime or not :- ");
    scanf("%d", &num);
    while(div<num){
    remain = num % div;
    if(remain==0){
        break;
    }
    div++;
    }
    if(remain==0){
        printf("The number %d is composite", num);
    }
    else if(num==0 || num==1){
        printf("This number is niether prime nor composite");
    }
    else
    {
        printf("The number %d is prime", num);
    }
    
    return 0;
}