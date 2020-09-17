<<<<<<< HEAD
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
=======
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
>>>>>>> 83db41e2553090393bfd53fac65f6268bcb8d4cb
}