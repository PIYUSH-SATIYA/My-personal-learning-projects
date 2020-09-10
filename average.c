   
#include<stdio.h>  
#include<conio.h>  

    void average(){
    int num, limit, sum = 0, temp, count=1;  
    float avg;
  
  
    printf("Enter, how many of numbers you wants to find average :- \n");  
    scanf("%d", &limit);  
  
    temp = limit;  
  
  
    while(limit)  
    {  
        printf("Enter number %d:\n", count);  
        scanf("%d", &num);  
        sum = sum + num;  
        limit--;  
        count++;
    }  
    avg = sum / (float)temp;  
    printf("Sum of these numbers = %d\n", sum);  
    printf("Average of these numbrs = %f\n", avg);   
}
int main()  
{   
    average();
    return 0; 
} 