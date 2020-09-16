#include<stdio.h>

int main(){
    int year;
    printf("Entre the year :-\n");
    scanf("%d", &year);
    
    if ((year%400)%4==0)
    {
        printf("The year %d is leap year\n", year);
    }
    else
    {
        printf("The year %d is not a leap year", year);
    }
    
    
    return 0;
}