#include<stdio.h>
void swap(int *,int*);
int main()
{

int a,b;
printf("eneter value for two variables : \n");
scanf("%d%d",&a,&b);
printf("values of variables befor swap ::\n");
printf("a =%d  b=%d\n ",a,b);
swap(&a,&b);

printf("values of variables after swap ::\n");
printf("a =%d  b=%d\n ",a,b);
 return 0;
}
void swap(int * a,int * b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
