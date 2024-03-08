#include<stdio.h>
#include<math.h>

int main()
{
 float s1,s2,s3;
 printf("enter three sides of traingle");
 printf("\nS1 : ");
 scanf("%f",&s1);
 printf("\nS1 : ");
 scanf("%f",&s2);
 printf("\nS1 : ");
 scanf("%f",&s3);
 float peri;
 peri=(s1+s2+s3);
 float h;
 h=(peri/2);
 float area;
 int k=(h*(h-s1)*(h-s2)*(h-s3));
 area= sqrt(k);
 printf("\n perimeter of taingle = %f\n area of traingle = %f",peri,area);
 return 0;
}

