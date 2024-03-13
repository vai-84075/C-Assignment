#include<stdio.h> 
void final_price( float qnt,float per);
 int main()
{
    float qnt;
    printf("\n Enter the quntity :  ");
    scanf("%f",&qnt);

    if(qnt>50)
    {
       final_price(qnt,15);
    }
    else if (qnt>30)
    {
       final_price(qnt,10);
    }
    else
    {
      final_price(qnt,0);
    }
    return 0;
}

void final_price( float qnt,float per)
{
    float price,dis,f_price;
    price=qnt*5.0f;
    if(per==0)
    {
    printf("price of %.2f unit of material is %.2f",qnt,price);
    }
    else
    {
      dis=(price)*((per) / 100.f);
      f_price=price-dis;
      printf("price of %.2f unit of material is =%.2f\n after %.2f %% of discount final price is : %.2f",qnt,price,per,f_price);
    } 
}