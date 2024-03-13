#include<stdio.h>

int main()
{   int num;
    printf("\n enter a number");
    scanf("%d",&num);
    if(num==0)
    printf("you enterd zero");
    else if (num>0)
    printf("enterd number is positive");
    else
    printf("you enterd negative number");
    return 0;
}