#include<stdio.h>
int main()
{
	
	int num,i=1;
	printf("enter number to print it's  table: ");
	scanf("%d",&num);
	while(i<=10)
	{
		printf("%d * %d = %d\n",num,i,num*i);
		i++;
	}
	return 0;
}
