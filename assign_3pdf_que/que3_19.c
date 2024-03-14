#include<stdio.h>

int main()
{
  int start,end;
  printf(" enter a range to print table of numbers between them ");
  printf(" startig range of number : ");
  scanf("%d",&start);
  printf("\n ending of range :");
  scanf("%d",&end);
  int n=start;
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
