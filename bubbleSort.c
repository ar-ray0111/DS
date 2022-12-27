#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int n, j,i,count[100];
    printf("Enter the number of elements of an array:");
    scanf("%d",&n);

    int* a = malloc(n*sizeof(int));
    printf("Enter the elements of an array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",a+i);

    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for (int i=0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}