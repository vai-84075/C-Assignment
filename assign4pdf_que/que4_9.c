#include<stdio.h>

int isprime(int);
void prime(int,int);

int main()
{
  int num,m,n;
  printf("Eneter a number to check is it prime or not :  ");
  scanf("%d",&num);
  if(isprime(num))
  printf(" %d is prime number",num);
  else
  printf("%d is not prime number",num);
  printf("enter a range to find prime numbers between them :  ");
  scanf("%d%d",&m,&n);
  prime(m,n);
 return 0;
}
int isprime(int n)
{
  int temp=n;
  for(int i=2;i<=(temp/2);i++)
  { 
  	if(n%i==0)
	{
	return 0;
	break;
	}
  }
return 1;
}
void prime(int m,int n)
{
	for(int i=m;i<=n;i++)
	{
		if(isprime(i))
		printf(" %d",i);
	}
}
