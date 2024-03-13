#include<stdio.h>
void m(int n);
void eql(int n);
void maximum(int a,int b, int c);
int main()
{
   int a,b,c;
here:
   printf("\nenter the 3 numbers to compare\n");
   scanf("%d%d%d",&a,&b,&c);
   maximum(a,b,c);
   goto here;
   return 0;
}
void m(int n)
{
 printf("\nmaximum number is %d",n);
}
void eql(int n)
{
printf("\nall numbers are equal%d %d %d",n,n,n);
}
void maximum(int a,int b, int c)
{

   if((a==b)&&(b==c))
   {
    eql(a);
   }
   else if (a==b)
   {
      if(a>c)
      m(a);
      else if(c>a)
      m(c);   
   }
    else if (a==c)
   {
      if(a>b)
      m(a);
      else if(b>a)
      m(b);   
   }
   else if (b==c)
   {
      if(a>b)
      m(a);
      else if(b>a)
      m(b);
   }
   else if(a>b&&a>c)
   {
   	m(a);
   }
   else if(c>b&&c>a)
   {
   	m(c);
   }
   else if(b>a&&b>c)
   {
   	m(b);
   }
}
