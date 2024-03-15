#include<stdio.h>
int calb(int, char,int);
int main()
{
    int a,b,c,q,r;
    char op,opr;
    printf("to perform basic calculations enter your operand then operator and then second operand\n");
    scanf("%d%c%c%d",&a,&opr,&op,&b);
    if(op=='/')
    {
        q=calb(a,'/',b);
        r=calb(a,'%',b);
        printf("\n%d / %d = %d",a,b,q);
        printf("\n%d / %d = %d  +  rem= %d ",a,b,q,r);
    }
    else
    {
    c=calb(a,op,b);
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
    case '/' : c=a/b;
               break;
    case '%' : c=a%b;
               break;
    default :
            printf("\n invalid operator ");
            
    }
    return c;    
}