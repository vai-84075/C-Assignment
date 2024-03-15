#include<stdio.h>
int power_fun(int, int);
int main()
{
  int base, indices,power;
  printf("enter base and indices to calculate power : ");
  printf("\n enter base : ");
  scanf("%d",&base);
  printf("\nenter indices : ");
  scanf("%d",&indices);
  power=power_fun(base,indices);
  printf("%d ^ %d = %d",base,indices,power);
 return 0;
}
int power_fun(int b,int k)
{

//printf("%d %d",b,i);
	int pwr=1;
//	printf("%d",pwr);
	for(int i=0;i<k;i++)
	{
		pwr*=b;
		printf("%d",pwr);

	}
	return pwr;


// return 33;
}

