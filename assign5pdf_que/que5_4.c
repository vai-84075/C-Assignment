#include<stdio.h>

void accept_arr(int*,int);
void print_arr(int *,int);
int  max(int *,int);
int size = 7;
int main()
{
  int arr[size];
  int mx;
  accept_arr(arr,size);
  print_arr(arr,size);
  mx=max(arr,size);
  printf("\n max num is  %d",mx);
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
int max(int * arr,int sz)
{
 int mx;
 mx=*(arr+0);
 for(int i=1;i<sz;i++)
 {
	if(mx<arr[i])
	{
	  mx=arr[i];
	}
 }
 return mx;
}	

