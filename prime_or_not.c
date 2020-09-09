#include<stdio.h>

int main(){
    int num, div, remain;
    printf("Enter a number to check it is prime or not :-");
    scanf("%d", &num);
    for(div=2;div<num;div++){
        remain = num % div;
        if(remain==0){
        break;
        }
        }
        if (remain == 0 )
        {
            printf("The number %d is composite", num);
        }
        else if(num==1 || num==0){
            printf("This number is niether prime nor composite");
        }
        else
        {
            printf("The number %d is prime", num);
        }
        
    
    return 0;
}