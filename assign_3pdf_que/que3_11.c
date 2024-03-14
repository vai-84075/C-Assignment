#include<stdio.h>

int main()
{
 int num,fact=1;
 printf("enter number to find its factorial:  ");
 scanf("%d",&num);
 if(num==0||num==1)
 	printf("%d!=1",num);
 else
 {
  for(int i=1;i<=num;i++)
  {
  fact=fact*i;
  }
  printf("%d ! =%d ",num,fact);
}
 return 0;
}
