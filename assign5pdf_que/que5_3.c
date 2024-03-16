#include<stdio.h>

void accept_arr(int*,int);
void print_arr(int *,int);
void rev_arr(int *,int);
int size = 7;
int main()
{
  int arr[size];

  accept_arr(arr,size);
  printf("\narray befor reverse\n");
  print_arr(arr,size);
  rev_arr(arr,size);
  printf("\narray after reverse\n");
  print_arr(arr,size);
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
void rev_arr(int * arr,int sz)
{
	int temp;
	int i=0;
	int j=(sz-1);
		for( ;i<(sz/2);i++,j--)
		{
			//printf("\n i =%d  j=%d ",i,j);
			temp= *(arr+i);
			*(arr+i)=*(arr+j);
			*(arr+j)=temp;
		}
}	

