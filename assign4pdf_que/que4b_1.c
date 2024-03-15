#include<stdio.h>
int fact(int);
int main()
{
  int n,fct;
  printf("\n enter number to find its factorial : ");
  scanf("%d",&n);
  fct=fact(n);
  printf("%d ! = %d",n,fct);
 return 0;
}
int fact(int n)
{
	int ft;
	if(n==1||n==0)
	return 1;
	ft=n*fact(n-1);
	return ft;
}
