#include<stdio.h>
void pallindrom(int a);
int main()
{
    int n,k;
    printf("enter a 5 digit number");
    scanf("5%d",&n);
    pallindrom(n);
    return 0;
}
void pallindrom(int a)
{ 
   int rev=0;
   int rem=0;
   int temp=a;
    while(temp!=0)
    {
       rem=temp%10;
       rev=rev*10+rem;
       temp/=10;
    }
    printf(" reveres =%d",rev);
    if(rev==a)
    printf("entered number is pallindrom");
    else
     printf("entered number is notpallindrom");

}