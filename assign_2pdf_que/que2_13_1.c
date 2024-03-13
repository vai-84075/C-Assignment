#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x and y co-ordinates :");
    scanf("%d%d",&x,&y);
    if((x==0))
    {
        if(y==0)
        {
            printf("origin");
        }
        else if (y>0)
        {
            printf("point on + y axis");
        }
         else if (y<0)
        {
            printf("point on -y  axis");
        }
    }
    else if (y==0)
    {
        if(x>0)
        {
            printf(" point lie on +x axis");
        }
        
        else if (x<0)
        {
            printf(" point lie on -x  axis");
        }
    }
    else if (x>0)
    {
        if(y>0)
        {
            printf("point lies in 1st quadrant");
        }
        else if (y<0)
        {
           printf("point lies in 4th quadrant");
        }
        
    }
    else if (x<0)
    {
        if(y>0)
        {
            printf("point lies in 2nd quadrant");
        }
        else if (y<0)
        {
           printf("point lies in 3rd  quadrant");
        }        
    }
    return 0;
}