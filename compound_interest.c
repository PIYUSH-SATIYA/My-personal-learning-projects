#include<stdio.h>
#include<math.h>

int main(){
    float time, p, rate, amount, comp_ann;
    printf("Enter principle :-");
    scanf("%f", &p);
    printf("Enter time (in years) :-");
    scanf("%f", &time);
    printf("Enter rate of interest (in percentage) :-");
    scanf("%f", &rate);
    printf("Enter how many times the rate will get compounded annually :-");
    scanf("%f", &comp_ann);
    amount = p*pow((1+rate/(100*comp_ann)), (time*comp_ann));
    printf("The amount at given principle, time and rate is :- %f\n", amount);
    printf("Therefore CI is :- %f\n", amount-p);
    return 0;
}