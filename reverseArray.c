#include<stdio.h>
int main()
{
    int n, a[100],j=0,i;
    printf("Enter the number of elements of an array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",a+i);

    }
    

    for (i=0;i<n/2;i++)
    {
        printf("%d\n", *(a+i));
        j=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=j;
        printf("%d\n", *(a+i));
    }
    for (i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }




    return 0;
}