#include<stdio.h>
#include<string.h>

void acpt_string(char *s);

int my_strcmp(const char * str1, const char *str2);

int main()
{
 
 char str1[20];
 char str2[20];
 printf("\n===================standard strcmp function======================\n");
 printf("enter two strings to compare : ");
 scanf("%s %s",str1,str2);
 size_t r;
 r=strcmp(str1,str2);
 if(r==0)
 printf("\n str1 and str2 are equal %s",str1);
 else if(r>0)
 printf("\nstr1 is greater than str2");
 else
 printf("\nstr1 is less than str2");


 printf("\n===================standard strncmp function with n=3======================\n");
 printf("enter two strings to compare : ");
 scanf("%s %s",str1,str2);
 r=strncmp(str1,str2,3);
 if(r==0)
 printf("\nstr1 and str2 are equal %s",str1);
 else if(r>0)
 printf("\nstr1 is greater than str2");
 else
 printf("\nstr1 is less than str2");


 printf("\n===================my_strcmp function======================\n");
 printf("enter two strings to compare : ");
 scanf("%s %s",str1,str2);
 int d;
 d=my_strcmp(str1,str2);
 if(d==0)
 printf("\nstr1 and str2 are equal %s",str1);
 else if(d>0)
 printf("\nstr1 is greater than str2");
 else
 printf("\nstr1 is less than str2");
 return 0;
}

void acpt_string(char *s)
{
 scanf("%[^\n]s",s);
}

int my_strcmp(const char *str1, const char *str2)
{
int i=0;
for( ;str1[i]!='\0';i++)
{  
   if(str1[i]!=str2[i])
      return str1[i]-str2[i];
}
return str1[i]-str2[i];
}
