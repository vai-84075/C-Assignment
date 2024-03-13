#include<stdio.h>

int main()
{  
    int a,b,c;
    printf("Enter 2 numbers to perform division on them  : \n");
    scanf("%d%d",&a,&b);
    do
    {
        if(b==0)
    {
        printf("\n can not divid by zero, please enter non zero divisor value  : ");
        scanf("%d",&b);
    }
    } while (b==0);
    c=a/b;
    printf("%d / %d = %d",a,b,c);
    return 0;
}