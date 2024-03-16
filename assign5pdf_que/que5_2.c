#include<stdio.h>
#include<stdlib.h>

int * mk_arr(int);
void acpt_arr(int *arr,int);
void print_arr(int *arr,int);
int arr_sum(int *,int size);
int arr_avrg(int *,int size);


int main()
{
  int size,sum,avrg;
  printf(" to make array enter size of an array : ");
  scanf("%d",&size);
  int * arr= NULL ;
  arr= mk_arr(size);
  if(arr!=NULL)
  {
  	printf("\n array of %d elements has been created",size);
  	acpt_arr(arr,size);
	printf("\n");
	print_arr(arr,size);
	printf("\n");
  }

sum=arr_sum(arr,size);
printf("\nsum = %d",sum);
avrg=arr_avrg(arr,size);
printf("\naverage = %d",avrg);
free(arr);
arr=NULL;
return 0;
}


int* mk_arr(int size)
{
  int * arr;
  arr=(int*)malloc(size*4);
  if(arr==NULL)
  {
   printf("\nmemory does not allocated ...");
   exit(1);
  }
  else
 return arr;
}

void acpt_arr(int * arr,int size)
{
 printf("\nenter the array elements");
 for(int i=0;i<size;i++)
  {
     printf("\n arr[%d]  ",i);
	 scanf("%d",&arr[i]);
  }
}
void print_arr(int * arr,int size)
{
  for(int i=0;i<size;i++)
  {
  printf("%4d",arr[i]);
  }
}
int arr_sum(int * arr,int size)
{
 int sum=0;
 for(int i=0;i<size;i++)
 sum+=arr[i];

 return sum;
}
int arr_avrg(int *arr,int size)
{
 int avrg;
 avrg=((arr_sum(arr,size))/size);
 return avrg;
}

