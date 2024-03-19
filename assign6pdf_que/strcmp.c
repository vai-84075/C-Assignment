#include<stdio.h>
#include<string.h>

void acpt_string(char *s);

int my_strcmp(const char * str1, const char *str2);

int main()
{
	int b;
	char str1[10];
	char str2[10];

printf("=================================================================================\n");
	printf("my_strcmp function\n");
    printf("\n Enter the two  string to compare  \n");
	printf("str1 : ");
	acpt_string(str1);
	b=getchar();	
	printf("str2 : ");
	acpt_string(str2);
    b=my_strcmp(str1,str2);
	if(b==0)
	printf("\nstr1 and str2 are same %s",str1);
	else if(b>0)
	printf("\nb>0");
	else
	printf("\nb<0");

printf("=================================================================================\n");
    printf("standard strcmp function\n");

	printf("\n Enter the two  string to compare  \n");
	printf("str1 : ");
	acpt_string(str1);
	b=getchar();	
	printf("str2 : ");
	acpt_string(str2);
	size_t d;
    d=strcmp(str1,str2);
	if(d==0)
	printf("str1 and str2 are same %s",str1);
	else if(d>0)
	printf("str1 is grater than str2");
	else
	printf("str1 is less than str2");

printf("=================================================================================\n");
	printf("standard strncmp function with n= 3");
	printf("\n Enter the two  string to compare  \n");
	printf("str1 : ");
	acpt_string(str1);
	b=getchar();	
	printf("str2 : ");
	acpt_string(str2);
    d=strncmp(str1,str2,3);
	if(d==0)
	printf("str1 and str2 are same %s",str1);
	else if(d>0)
	printf("str1 is greater than str2");
	else
	printf("str2 is less than str2");
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
