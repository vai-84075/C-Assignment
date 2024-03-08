#include<stdio.h>
#include<stdlib.h>

int main(int argc,char*argv[])
{
   int size=(argc-1);
   int arr[size];
   for(int i=0;i<size;i++)
   {
    arr[i]=atoi(argv[(i+1)]);
   }
    int j=0;
    for(j=0;j<size;j++)
    {
        printf(" %d",arr[j]);
    }
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\n out of above given command line values %d is max",max);
    return 0;
}