#include<stdio.h>
int facto(int);
int main()
{
	int num,fact;
	printf("Enter number to find its factorial : ");
	scanf("%d",&num);
	fact=facto(num);
	printf(" factorial of %d is %d",num,fact);
	 return 0;
}
int facto(int n)
{
	int fact=1,i=1;
	while(i<=n)
	{
	 fact=fact*i;
	 i++;
	}
	return fact;
}
