#include<stdio.h>

int calculate(int , char, int);

int main()
{
    int num1,num2,res;
    char opr;
    printf("enter num1\n");
    scanf("%d",&num1);
     printf("enter operator \n");
    scanf("%*c%c",&opr);
    printf("enter num2\n");
    scanf("%d",&num2);

   // printf(" %d %c %d ,num1,opr,num2);
    if(( opr == '/' ) && (num2 == 0))
        {
            printf("denominator cannot be zero");
        }
    else
    {
        res=calculate(num1,opr,num2);
        printf(" %d %c %d = %d",num1,opr,num2,res);
    }
 //   printf(" %d %c %d = %d",num1,opr,num2,res);
    return 0;
}

int calculate(int n , char o, int m)
{
    int res;
    switch (o)
    {
    case '+':   res=n+m;
                 break;

    case '-':   res=n-m;
                 break;   
    case '*':   res=n*m;
                 break; 

     case '/':   res=n/m;
                 break;                            
       default: printf("invalid operator");
    }

    return res;
}