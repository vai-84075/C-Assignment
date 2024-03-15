#include<stdio.h>
void repeat(char,int);
int main()
{
     int n;
    char ch;
    printf("Enter character to print it multiple time :  ");
    scanf("%c",&ch);
    printf("eneter how many times you want to print :  ");
    scanf("%d",&n);
    repeat(ch,n);
    return 0;
}
void repeat(char ch,int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %c ",ch);
    }
}