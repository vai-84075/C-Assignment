#include<stdio.h>
int main()
{
	int num,i=1;
	printf("enter your number to find its factors : ");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
		{
		printf(" %d",i);
		}
	
		i++;
	}
	return 0;
}
