#include<stdio.h>

int main()
{
	char ch;
	int num,n=0;
	printf("enter your character and how many times you want to print it");
	scanf("%c%d",&ch,&num);
	while(n<num)
	{
	printf("%c",ch);
	n++;
	}
 return 0;
}
