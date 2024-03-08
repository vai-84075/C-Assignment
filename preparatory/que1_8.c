#include<stdio.h>

struct student
{
    char name[10];
    int r_no;
    int marks;
};
 void accept_details(struct student st);
 void display_details(struct student st);
int main()
{
    struct student std_1;
    accept_details(std_1);
    display_details(std_1);      
    return 0;
}
void accept_details(struct student st)
{
   printf("\n Eneter the student data as");
   printf("\n name: ");
   scanf("%s",st.name);
   printf("\n roll num.: ");
   scanf("%d",st.r_no);
   printf("\n marks: ");
   scanf("%d",st.marks);
}
void display_details(struct student st)
{
   printf("\n name: %s ",st.name);
   printf("\n roll num.: %d",st.r_no);
   printf("\n marks:%d ",st.marks);
} 
