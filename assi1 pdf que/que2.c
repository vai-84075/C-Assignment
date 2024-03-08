// take number from user and disply it using other format specifiers 
#include<stdio.h>
int main()
{
 int n;
 printf(" enter a integer number\n ");
 scanf("%d",&n);
 printf("\n you enterd ' %d '",n);
 printf("\n decimal = %d in char '%c' hex= %x  octal= %o \n",n,n,n,n);
 return 0;
}
