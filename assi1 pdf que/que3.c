/*Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.
*/

#include<stdio.h>
int main()
{
 char c;
 printf(" enter a single character:\n ");
 scanf("%c",&c);
 printf("\n you enterd ' %c ' and its ASCI value is == %d ",c,(int)c);
 printf("\nchar '%c' in decimal = %d hex= %x  octal= %o \n",c,c,c,c);
 return 0;
}

