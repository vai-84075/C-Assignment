#include<stdio.h>
#include<string.h>

void acpt_string(char *s);

int my_strlen(char *s);

int main()
{
	char b;
	int  alen1,alen2=0;
	char str1[10];
	char str2[10];
	printf("\n Enter the string to calculate the leght of string by using string.h functin  strlen :  \n");
	acpt_string(str1);
	alen1=strlen(str1);
	printf("lenght of string '%s' is %d\n ",str1,alen1);
	b=getchar();	
	printf("\n Enter the string to calculate the leght of string by my_strlen function :  \n");
	acpt_string(str2);
	alen2=my_strlen(str2);
	printf("lenght of string %s is %d\n ",str2,alen2);
	return 0;
}

void acpt_string(char *s)
{
 scanf("%[^\n]s",s);
}

int my_strlen(char *s)
{
int flen=0;
for(int i=0;s[i]!='\0';i++)
{
 flen++;
}

  return flen;
}

