 #include<stdio.h>
void accept_element(int arr[5]);
void array(int ar1[5],int ar2[5]);
void display(int ar[5]);

int arr_a[5],arr_b[5],arr_c[5];
int main()
{
    accept_element(arr_a);
    accept_element(arr_b);
    array(arr_a,arr_b);
    display(arr_a);
    display(arr_b);
    display(arr_c);
    return 0;
}
void accept_element(int arr[5])
{
    printf("\n enter 5 array elements\n");
    for(int i=0;i<5;i++)
    {
        printf("  ");
        scanf("%d",&arr[i]);
    }
}

void array(int ar1[5] , int ar2[5])
{
    for(int i=0;i<5;i++)
    {
        arr_c[i]=((ar1[i])*(ar2[i]));
    }
}

void display(int ar[5])
{
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("  %d",ar[i]);
    }
}