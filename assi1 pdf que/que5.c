// print asci values of some of the escape sequenc

#include<stdio.h>
int main()
{
    printf("\t ASCI VALUES OF ESCAPE SEQUENCE\n");
    printf("-----------------------------------------------------------\n");
    printf("\tEscape Sequence  \t||\tASCI VAULE\n");
    printf("-----------------------------------------------------------\n");
    printf("\t\t\\n\t  \t\t   %d\n",'\n');
    printf("\t\t\\r\t  \t\t   %d\n",'\r');
    printf("\t\t\\t\t  \t\t   %d\n",'\t');
    printf("\t\t\\a\t  \t\t   %d\n",'\a');
    printf("\t\t\\b\t  \t\t   %d\n",'\b');
    printf("-----------------------------------------------------------\n");
    return 0;

}