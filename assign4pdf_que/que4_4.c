#include<stdio.h>
int flag;
int calb(int, char,int);
int main()
{
    int a,b,c;
    char op,opr;
    printf("to perform basic calculations enter your operand then operator and then second operand\n");
    scanf("%d%c%c%d",&a,&opr,&op,&b);
    c=calb(a,op,b);
    if(flag==1)
    {
        return 0;
    }
    else
    {
      printf("\n %d %c %d = %d",a,op,b,c);
    } 
    return 0;
}

int calb(int a, char op,int b) 
{ 
    int c;
    switch (op)
    {
    case '+' : c=a+b;
               break;
    case '-' : c=a-b;
               break;
    case '*' : c=a*b;
               break;
    case '/' : if(b==0)
            {
             printf("denominator can not be zero");
             flag=1;
             break;
            }
            else
              { c=a/b;
               break;
              }
    default :
            printf("\n invalid operator ");
            
    }
    return c;    
}