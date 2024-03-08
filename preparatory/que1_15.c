#include<stdio.h>
#include<string.h>
struct count
{
    char c;
    int n; 
};

int main ()
{  
     
    char string_1[20],str_2;
    printf("\n Enter the string\n   ");
    gets(string_1);
    strlwr(string_1);
 //printf("%s",string_1);
    int len,strln;
  /*  len=sizeof(string_1);           20 byte */
    strln=strlen(string_1);         //actual size
  // printf(" len = %d strlen= %d",len,strln);
  struct count list [strln];
  for(int i=0;i<=strln;i++)
    {   int aa=0;
        list[i].c = string_1[i];
        for(int j=0;j<=strln;j++)
        {
            if((list[i].c==string_1[j]))
            {
               aa++;
               string_1[j]='z' ;
            }
        }
        list[i].n=aa;

    }
    for(int k=0; k<strln;k++)
    {   
        if(list[k].c=='z')
        {
            continue;
        }
        printf("\n %c =  %d",list[k].c,list[k].n);
    }
   return 0;
}

