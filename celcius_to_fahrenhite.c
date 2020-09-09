#include<stdio.h>
//(32°F − 32) × 5/9 = 0°C
//(0°C × 9/5) + 32 = 32°F
void cel_to_fahren(){
    int num;
    float celcius, fahrenheit;
    printf("If you wants to convert celcius to fahrenheit then enter 1 or youwants to convert fahreheit to celcius then enter 2 :- ");
    scanf("%d", &num);
    if(num==1){
    printf("Enter the temperature in celcius :- ");
    scanf("%f", &celcius);
    fahrenheit = (celcius*9/5)+ 32;
    printf("The temperature in fahrenhit is :- %.2f", fahrenheit);
    }
    else if(num==2){
    printf("Enter the temperature in fahrenheit :- ");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * 5/9;
    printf("The temperature in celcius is :- %.2f", celcius);
    }
    else
    {
        printf("Error!!! you can only enter 1 or 2");
    }
    
}
int main(){
    cel_to_fahren();
    return 0;
}