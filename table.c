#include<stdio.h>

int main(){
    int tab, multi;
    printf("Enter the number of which you wants to know table:-");
    scanf("%d", &tab);
    for(multi=1;multi<=10;multi++){
        printf("%d x %d = %d\n",tab, multi, tab*multi);
    }
    return 0;
}