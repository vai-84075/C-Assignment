#include<stdio.h>
 void acpt_num(int *p);
 float average(int a,int b, int c);
int main()
{   
    int a,b,c;
    float rr;
    printf("\n Enter three  numbers\n");
    acpt_num(&a);
    acpt_num(&b);
    acpt_num(&c);
    printf("\n average of %d %d %d is %.2f",a,b,c,average(a,b,c));
    printf("\n");
   
    return 0;
}

 void acpt_num(int *p)
 {
    scanf("%d",p);
    printf("\n");
 }

float average (int l,int m, int n)
{
    float sum;
    sum=l+m+n;
    sum/=3;
    return sum;
}