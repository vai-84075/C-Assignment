#include<stdio.h>
int pwr(int,int);
int main()
{
 int b,i,p;
 printf("enter base and indicec to calculate power : ");
 scanf("%d%d",&b,&i);
 p=pwr(b,i);
 printf("\n%d ^ %d = %d ",b,i,p);
 return 0;
}
int pwr(int b,int c)
{
	if(c==0)
	return 1;
	int pvr=b*pwr(b,(c-1));
	return pvr;
}
