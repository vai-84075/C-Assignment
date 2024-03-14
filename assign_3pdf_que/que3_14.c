#include<stdio.h>

int main()
{
	int num,flag=0;
	printf("enter a number to check it is prime or not: ");
	scanf("%d",&num);
//	if(num==0||num==1)

	for(int i=2;i<=((num)/2);i++)
	{
		if((num%i==0))
		{ flag=1;
		 break;
		}
	}
	if(flag==0)
	printf("\n number %d is  prime",num);
	else
	printf("\n number %d  is not  prime number",num);
 return 0;
}
