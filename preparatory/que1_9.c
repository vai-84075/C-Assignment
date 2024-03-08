#include<stdio.h>
void convert(int n,int b);
int main()
{
    int num;
    printf("\nEnter the number :  ");
    scanf("%d",&num);
    printf("hello%d",num);
    convert(num,2);
    printf("\n--------");
    convert(num,8);
    printf("\n--------");
    convert(num,16);
    printf("\n--------");
    
    return 0;
}

void convert(int n,int b)
{ 
    int arr[10];
    int i,k,num,quo=0;
    num=n;
    i=-1;
    do
    {
        i++;
        quo=num/b;
        arr[i]=(num%b);
        num=quo;
    } while (quo!=0);
    printf("\n\t\tdecimal\t\tto\t\t(n)%d\n\t\t%d\t\t\t\t",b,n);
    for(k=i;k>=0;k--)
    {
        printf("%d",arr[k]);
    }
}