#include<stdio.h>
 int main()
{
    float u_price=5.0f,qnt,price,dis,f_price;
    printf("\n Enter the quntity :  ");
    scanf("%f",&qnt);
    price=u_price*qnt;
    if(qnt>30.0f)
    {
        dis=price*0.10f;
        f_price=price-dis;
        printf("price of %.2f unit of material is =%.2f\n after 10%% of discount final price is : %.2f",qnt,price,f_price);
    }
    else if (qnt>50.0f)
    {
        dis=price*0.15f;
        f_price=price-dis;
        printf("price of %.2f unit of material is =%.2f\n after 15% of discount final price is : %.2f",qnt,price,f_price);
    }
    else
    {
      printf("price of %.2f unit of material is %.2f",qnt,price);
    }
    return 0;
}