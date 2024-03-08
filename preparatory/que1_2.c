#include<stdio.h>
int fact(int n);
int main()
{
    int num=0;
    int result;
    printf("\n Enter a number to calculate its factorial\n  ");
    scanf("%d",&num);
    result=fact(num);
    printf("factorial of %d is = %d",num,result);
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return (n*fact(n-1));
}