#include<stdio.h>
void accept_marks();
void display_marks();
char calculate_grade();

int marks[5];

int main()
{
    char c;
    int choice;
    do
    {
    accept_marks();
    //display_marks();
    c=calculate_grade();
    if(c=='E')
    printf("\ngrade obtained by student is Excelent");
    else
    printf("\ngrade obtained by student is  %c",c);
    printf("\n 1. contineu \n 0. exit\n");
    scanf("%d",&choice);
    } while (choice!=0);
    return 0;
}

void accept_marks()
{
    int i=0,temp=30;
    printf("Enter marks for subjects out of 20");
    for(i=0;i<5;i++)
    {
        printf("\n sub_%d\t\t",(i+1));
        do
        {
         scanf("%d",&temp);
         if(temp>20)
         {
         printf("\n Enter marks again, marks<=20");
         printf("\n sub1_%d\t\t",(i+1));
         }
        } while (temp>=21);
        marks[i]=temp;
    }
}
void display_marks()
{
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("\n sub_%d\t\t%d",(i+1),marks[i]);
    }
}

char calculate_grade()
{
    int i,sum=0;
        for(i=0;i<5;i++)
        {
            sum+=marks[i];
        }
        printf("\n\n total marks of student = %d/100",sum);
        if(sum>=90)
        {
            return 'E';
        }
        else if ((sum<90)&&(sum>=80))
        {
            return 'A';
        }
        else if ((sum<80)&&(sum>=70))
        {
            return 'B';
        }
        else if ((sum<70)&&(sum>=60))
        {
            return 'c';
        }
        else if (sum<60)
        {
                return 'c';
        }
 }