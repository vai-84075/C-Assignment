#include<stdio.h>
#include<string.h>
int main()
{
 char arr[10];
 printf("enter your string :");
 scanf("%s",arr);
 
 printf("before reverse string was: ");
 printf("%s",arr);

int len;
len=strlen(arr);
//printf("lenght =%d",len);

int i;
i=len-1;
char temp;
int j=0;
for( ;i>=(len/2);i--,j++)
{
temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
}


/*
//printf("\n");
//printf(" i= %d j=%d ",i,j);
temp=arr[i];
//printf("temp=%c",temp);
arr[i]=arr[j];
//printf("arr[%d]= %c",i,arr[i]);
arr[j]=temp;
//printf("arr[%d]=%c",j,arr[j]);
}*/


printf("after reverse: ");
printf("%s",arr);
return 0;
}

