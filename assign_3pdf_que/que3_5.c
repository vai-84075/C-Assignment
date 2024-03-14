#include<stdio.h>
int main()
{
  int num,fact=1,i=1;
  printf("\n Enter number to find its factorial : ");
  scanf("%d",&num);
  printf("num = %d  i = %d ",num,i);
  if(num==0)
   printf(" factorial of 0=1");
 else
 {
   while(i<=num)
    {
     fact=fact*i;
	 i++;
    }
	printf("%d! = %d ",num,fact);
}
  return 0;
}
