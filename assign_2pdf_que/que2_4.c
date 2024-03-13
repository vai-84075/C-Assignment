#include<stdio.h>

int main()
{   int n1,n2;
    printf(" enter to numbers to compare\n");
    scanf("%d",&n1);
    printf("\n");
    scanf("%d",&n2);
    if(n1==n2)
    printf( "entered two numbers are eqauls %d %d\n",n1,n2);
    else if (n1>n2)
    printf("number %d is greater than %d",n1,n2);
    else
    printf("number %d is greater than %d",n2,n1);
    return 0;
}