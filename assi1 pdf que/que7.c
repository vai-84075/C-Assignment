#include<stdio.h>

int t1;
int digit();

int main()
{   int num,d0,d1,d2,d3;
    printf("enter a 4 digit number : ");
    scanf("%4d",&num);
    t1=num;
    d0=digit();
    d1=digit();
    d2=digit();
    d3=digit();

   // printf(" d0=%d d1=%d d2=%d d3=%d",d0,d1,d2,d3);

   printf("\na.  %d  %d  %d  %d",d3,d2,d1,d0);
   printf("\nb.  %d = %d + %d + %d + %d",(d3*1000+d2*100+d1*10+d0),d3*1000,d2*100,d1*10,d0);
   printf("\nc.  %d\n",(d3+d2*10+d1*100+d0*1000));
   return 0;
}

int digit(int d)
{    int n;
    n=t1%10;
    t1=t1/10;
    return n;
}