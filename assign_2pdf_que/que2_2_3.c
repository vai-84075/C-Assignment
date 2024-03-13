#include<stdio.h>

int main()
{   
    int e_id,dp_n;
    char des_c;
    printf("Enter the employee id : ");
    scanf("%d",&e_id);
     printf("Enter the department no. : ");
    scanf("%d",&dp_n);
     printf("Enter the designation code : ");
    scanf("%*c%c",&des_c);
  //  printf(" employee id = %d  department no = %d  designation code = %c ",e_id,dp_n,des_c);
    switch (dp_n)
    {
    case 10 : printf(" eployee with employee id %d is working in ""Marketing"" as",e_id);
                break;
    case 20 : printf(" eployee with employee id %d is working in ""Management"" as",e_id);
                break;
    case 30 : printf(" eployee with employee id %d is working in ""SALES"" as",e_id);
                break;
    case 40 : printf(" eployee with employee id %d is working in ""Designing"" as",e_id);
                break;
    }

    switch (des_c)
    {
    case 'M' : printf(" MANAGER");
             break;
     case 'S' : printf(" SUPERVISIOR");
             break;
     case 's' : printf(" SECURITY OFFICER");
             break;
     case 'C' : printf(" CLERK");
             break;
    }

    return 0;
}