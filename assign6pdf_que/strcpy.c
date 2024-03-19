#include<stdio.h>
#include<string.h>

void acpt_string(char *s);

char * my_strcpy(char * dest, const char *src);

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
	d=strcpy(str1,str2);
	printf("\n after strcpy str1=%s and str2=%s\n",str1,str2);
b=getchar();
	printf("=================================================\n");
	printf("to try strncpy enter 2 strings \n ");
	acpt_string(str1);
	b=getchar();	
	acpt_string(str2);
	printf("user entered str1= %s and str2 = %s\n",str1,str2);
	d=strncpy(str1,str2,3);
	printf("after strncpy  str1= %s and str2 = %s and return %s\n",str1,str2,d);
	b=getchar();
	printf("====================================================\n");
	printf("\n Enter the two  string:  to test my_strcpy \n");
	acpt_string(str1);
	b=getchar();	
	acpt_string(str2);
	printf("user entered str1= %s and str2 = %s\n",str1,str2);
	m=my_strcpy(str1,str2);
	printf("after strcpy  str1= %s and str2 = %s and return %s\n",str1,str2,m);

	return 0;
}

void acpt_string(char *s)
{
 scanf("%[^\n]s",s);
}

char * my_strcpy(char *dest, const char *src)
{
for(int i=0;src[i]!='\0';i++)
dest[i]=src[i];

return dest;
}
