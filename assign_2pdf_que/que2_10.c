#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a singel character ::  ");
    scanf("%c",&ch);
    if(((ch)>=65&&(ch)<=90)||((ch)>=97&&(ch)<=112))
    {
        if (((ch)>=65&&(ch)<=90))
        {
            printf(" entered UPPERCASE ALPHABET ");
        }
        else if (((ch)>=97&&(ch)<=112))
        {
            printf(" entered LOWERCASE ALPHABET ");
        }       
    }
    else if(((ch)>=48&&(ch)<=57))
    {
        printf(" entered digit ");
    }
    else if(ch==32)
    {
        printf("SPACE");
    }
    else if(ch==9)
    {
        printf("SPACE");
    }
    else if(ch==13)
    {
        printf("CARRIAGE RETURN");
    }
    else if(ch==10)
    {
        printf("ENTER / NEW LINE ");
    }
    else
    {
        printf("some spaicail character");
    }
    return 0; 
}