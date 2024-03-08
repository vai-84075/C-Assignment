#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int num =atoi(argv[1]);
    printf("\ntable of %d is as follow\n",num);
    for(int i=1;i<=10;i++)
    {
        printf(" %d ",(num*i));
    }
    return 0;
}