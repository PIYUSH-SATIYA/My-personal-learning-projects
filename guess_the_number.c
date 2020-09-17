#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
      int number, guessed, nguess=1;
    srand(time(0));
    number = rand()%100+1;
    // printf("the number is %d\n", number);
        printf("Guess any number between 1 and 100\n");
    do  
    { 
        scanf("%d", &guessed);
        if (guessed<number)
        {
            printf("Higher number please\n");
        }
        else if (guessed>number)
        {
            printf("lower number please\n");
        }

        else
        {
            printf("You have guessed the correct number!!! in %d attempts", nguess);
        }
        nguess++;

    } while (guessed!=number);
    
    return 0;
}