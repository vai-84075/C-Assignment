#include<stdio.h>

int main()
{
 	int base,index,power=1;
	printf("enter a base and index to calculate power\n");
	printf("Base : ");
	scanf("%d",&base);
    printf("\nindex : ");
	scanf("%d",&index);
	for(int i=0;i<index;i++)
	{
	 power*=base;
	}
	printf("%d ^ %d = %d",base,index,power);
 return 0;
}
