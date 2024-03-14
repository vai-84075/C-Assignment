#include<stdio.h>

int main()
{
  int n=1;
  for(int i=0;i<10;i++)
  {
  		for(int i=1;i<=10;i++)
  		{ 
		printf(" %4d",n*i);
		}
		printf("\n");
		n++;
  }
 return 0;
}
