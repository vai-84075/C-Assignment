#include<stdio.h>
#include<stdlib.h>

int main()
{
 int temp,num;
 temp=rand();
//printf("%d",temp);
printf("gause the number between 1 to 1000 : ");
for(int t=0;t<10;t++)
{
	scanf("%d",&num);
	if(temp==num)
	printf("Congratulations your guess is correct");
	else if( num <temp)
	printf("**left**");
	else
	printf("**right**");
}
printf("the magic number was %d ",temp);
 
 return 0;
}
