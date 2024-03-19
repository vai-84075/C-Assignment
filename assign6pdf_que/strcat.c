#include<stdio.h>
#include<string.h>

void acpt_string(char *s);

char * my_strcat(char * dest, const char *src);

int main()
{
	char b;
	char *d;
	char *m;
	int  alen1,alen2=0;
	char str1[10];
	char str2[10];


	printf("\n Enter the two  string:  \n");
	acpt_string(str1);
	b=getchar();	
	acpt_string(str2);
	printf("user entered str1= %s and str2 = %s\n",str1,str2);
	d=strcat(str1,str2);
	printf("\n after strcat str1=%s and str2=%s\n",str1,str2);
    b=getchar();
	printf("=================================================\n");
	printf("to try strncat enter 2 strings \n ");
	acpt_string(str1);
	b=getchar();	
	acpt_string(str2);
	printf("user entered str1= %s and str2 = %s\n",str1,str2);
	d=strncat(str1,str2,3);
	printf("after strncat  str1= %s and str2 = %s and return %s\n",str1,str2,d);
	b=getchar();
	printf("====================================================\n");
	
	printf("\n Enter the two  string:  to test my_strcpy \n");
	acpt_string(str1);
	b=getchar();	
	acpt_string(str2);
	printf("user entered str1= %s and str2 = %s\n",str1,str2);
	m=my_strcat(str1,str2);
	printf("after strcpy  str1= %s and str2 = %s and return %s\n",str1,str2,m);

 return 0;
}

void acpt_string(char *s)
{
 scanf("%[^\n]s",s);
}

char * my_strcat(char *dest, const char *src)
{

int i=0,j=0;
for( ;dest[i]!='\0';i++);
for( ;src[j]!='\0';j++,i++)
     dest[i]=src[j];

     dest[i]='\0';

return dest;
}

