#include<stdio.h>
void fib_seris(int);
int main()
{ 
    int n;
    printf("enter how many terms of fibonacci series to print : ");
    scanf("%d",&n);
    fib_seris(n);
    return 0;
}
void fib_seris(int n)
{
    int a=0,b=1,c;
    if(n==0)
    {
        return;
    }
    printf(" 0");
  for(int i=1;i<n;i++)
  { 
    c=a+b;
    printf(" %d ",c);
    b=a;
    a=c;  
  }
}