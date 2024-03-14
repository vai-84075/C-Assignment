#include<stdio.h>

int main()
{
	int range,n1,n2,n3;
	printf(" enter a  number to print that many fibonacci terms :");
	scanf("%d",&range);
	n1=1;
	n2=0;
	printf("%d  %d",n2,n1);
	for(int i=3;i<=range;i++)
	{
	 n3=n1+n2;
	 printf("   %d",n3);
	 n2=n1;
	 n1=n3;
	}
 return 0;
}
