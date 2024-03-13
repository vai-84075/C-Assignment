#include<stdio.h>
int main ()
{
	int num,m,n,i=1;
	printf("enter a number : ");
	scanf("%d",&num);
	m=num;
	while(i<(num/2))
	{
		if(m%i==0)
		{
			n=m/i;
			if(i<n)
			{
	           printf("%d * %d = %d\n",i,n,i*n);
			}
		}

	i++;
	}
return 0;
}
