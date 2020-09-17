#include<stdio.h>
//(0°C × 9/5) + 32 = 32°F
//(0°F − 32) × 5/9 = -17.78°C


void temp_conv(){
    int conv;
    float temperature, celcius, fahrenheit;
    printf("Enter 1 if you want to convert celcius into fahrenheit or 2 if you want to convert fahrenheit into celcius :- ");
    scanf("%d", &conv);
    if(conv==1){
        printf("Enter temperature in celcius :- ");
        scanf("%f", &celcius);
        temperature = (celcius*9/5) + 32;
        printf("The temperature in fahrenheit is %.2f", temperature);
    }
    else if(conv==2){
        printf("Enter temperature in fahrenheit : - ");
        scanf("%f", &fahrenheit);
        temperature = (fahrenheit-32) * 5/9;
        printf("The temperature in celcius is %.2f", temperature);
}
    else{
        printf("Error!!! you can enter 1 or 2 only");
    }
}

int main(){
    temp_conv();
    return 0;
}