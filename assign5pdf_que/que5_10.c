#include<stdio.h>

void accept_arr(int*,int);
void print_arr(int *,int);
int* lin_srch(int*,int,int);
int size = 10;
int main()
{
  int arr[size];
  int key;
  int* indx;
  accept_arr(arr,size);
  print_arr(arr,size);
  printf("\nenter a key to search into array:  ");
  scanf("%d",&key);
  indx=lin_srch(arr,size,key);
  if(indx== NULL)
  printf("\nkey not found address returned NULL");
  else
  printf("\nkey found at addres = %u ",indx);
 return 0;
}

void accept_arr(int * arr, int sz)
{
  printf("pleas enter %d elements of array\n",size);
  for(int i=0;i<sz;i++)
  {
    printf("ele %d :  ",i+1);
	scanf("%d",arr+i);
  }
}
void print_arr(int * arr,int sz)
{

  printf("array elements are : ");
  for(int i=0;i<sz;i++)
  {
	printf(" %d",*(arr+i));
  }

}
int* lin_srch(int* arr,int sz,int key)
{
  for(int i=0;i<sz;i++)
  {
  	if(arr[i]==key)
	return (arr+i);
  }
	return NULL;
}

