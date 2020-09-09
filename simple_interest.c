#include<stdio.h>
#include<math.h>

int main(){
    float principle, time, rate;
    printf("Enter the principle amount in Rupees\n");
    scanf("%f", &principle);
    printf("Enter the time in years\n");
    scanf("%f", &time);
    printf("Enter the rate of interest in percentages\n");
    scanf("%f", &rate);
    printf("The simple interest on given values is:- %f", (principle*time*rate)/100);
    return 0;
}