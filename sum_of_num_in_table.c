#include<stdio.h>

int main(){
    int sum = 0, tab, count = 1;
    printf("Enter a number such that you wants sum all the numbers occuring in its table :-");
    scanf("%d", &tab);
    while(count <= 10){
        sum = tab * count + sum;
        count++;
    }
    printf("The sum of numbers occuring in table of %d is :- %d", tab, sum);
    return 0;
}