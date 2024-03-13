#include<stdio.h>

int sum_dgt(int);
int rev_num(int);
void pall(int);
void arm(int);
int main()
{

 int num,rev,sum;
 printf("enter your nnuber : ");
 scanf("%d",&num);
 sum=sum_dgt(num);
 rev=rev_num(num);
 printf("\n sum of digits in number %d is %d",num,sum);
 printf("\n revers of %d is %d",num,rev);
 pall(num);
 //armstrg(num);
 arm(num);
 return 0;
 
}

int sum_dgt(int n)
{
	int sum=0,rem,num=n;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	return sum;
}
int rev_num(int n)
{
	int rev=0,rem,num=n;
	while(num!=0)
      {
          rem=num%10;
         rev=rev*10+rem; 
 		num=num/10;
      }
	  return rev;
}
void pall(int n)
{

int rev;
rev=rev_num(n);
if(rev==n)
printf("\n number %d is pallindrom",n);
else
printf("\n number %d is not pallindrom",n);

}
void arm(int n)
{
 int num=n;
 int prod=0;
 int rem;
 while(num!=0)
 {
	rem=num%10;
	prod=prod+(rem*rem*rem);
	num=num/10;
 }
 if (prod==n)
 printf("\n %d is armstrong number",n);
 else
 printf("\n %d is not a armstrong number",n);
// printf("\nhello armstromg prod = %d",prod);
}
