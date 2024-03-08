#include<stdio.h>

int main()
{   
    int n;
    char c;
    printf("\n Enter single character to detect its type   ");
    scanf("%c",&c);
    n=(int)c;
    if((n>=48)&&(n<=57))
    {
        printf("%c is of type digit",c);
    }
    else if ((n>=65)&&(n<=90))
    {
         printf("%c is of type Uppercase alphabet",c);
    }
    else if ((n>=97)&&(n<=122))
    {
         printf("%c is of type Lowercase alphabet",c);
    }
    else 
    {
       printf("%c is of type other spacial character",c);
    }
    return 0;
}