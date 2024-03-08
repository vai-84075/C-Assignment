#include<stdio.h>
#include<string.h>

int main()
{
    char string [20];
    
    printf("enter strig up to 20 char");
    printf("\n");
    scanf("%s",&string);
    int l=strlen(string);
    char str_rev [l];
    //str_rev[l+1]='\0';
    printf("\n length %d",l);
    printf("\n inpute string %s",string);

   printf("\n");
   for(int i=l;i>=0;i--)
    { 
        str_rev[l-i]=string[i];
    }
    //str_rev[l+1]='\0';
   //printf("%c",str_rev[l+1]);
  // puts(str_rev);
    printf("\n output string %s \n:",str_rev);
   for(int i=0;i<=l;i++)
   {
    printf("%c",str_rev[i]);
   }
   
    return 0;
}