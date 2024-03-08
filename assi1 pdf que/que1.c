/* Write a program to Accept two numbers and
 a. find its sum.
 b. find its difference.
 c. find its product.
 Test the program using different integral data type signed/unsigned char/int/long.
 First test the result using small values. Then test the same program using large values.
 Observe the results
 */
 
 #include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int main()
 {
  int n1,n2,n3;
  printf("Enter two numbers :  ");
  scanf("%d",&n1);
  scanf("%d",&n2);
  n3=add(n1,n2);
 printf("\n%d + %d =%d",n1,n2,n3);
  n3=sub(n1,n2);
 printf("\n%d + %d =%d",n1,n2,n3);
  n3=mul(n1,n2);
  printf("\n%d + %d =%d",n1,n2,n3);
 return 0;
 }


int add(int a,int b)
{
 int r;
 r=a+b;
 return r;
}
int sub(int a,int b)
{

 int r;
 r=a-b;
 return r;

}
int mul(int a,int b)
{
 int r;
 r=a*b;
 return r;
}
