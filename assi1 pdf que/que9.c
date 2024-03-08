#include<stdio.h>

void cel_fer();
void fer_cel();

int main()
{   
    int choice;
    do
    {
    
    printf("\n\n\n Enter your choice\n 0 to exit.\n 1 fahrenheit ==> celcius\n 2 celcius ==> fahrenheit ");
    do{
        scanf("%d",&choice);
        if(choice>2)
        {
         printf("invalid input please enter again");
        }
      }while(choice>2);
    
    
    
    if(choice==0)
    {
            return 0;
    }   
    else if(choice==1)
    {
    fer_cel();
    }
    else if(choice)
    {
    cel_fer();
    }

} while (choice!=0);
    return 0;
}
void cel_fer()
{   float cel,fer;
    printf("\n enter  temprature in celcius =   ");
    scanf("%f",&cel);
    fer = ((cel* 9) / 5) + 32;
    printf(" ==> = %2.2f fahrenheit",fer);
}
void fer_cel()
{
    float cel,fer;
    printf("\n enter  temprature in fahrenheit = ");
    scanf("%f",&fer);
  cel = (fer - 32) * 5 / 9;
    printf("==> = %2.2f celsius",cel);
}

