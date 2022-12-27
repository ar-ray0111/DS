#include<stdio.h>
int main()
{
    int n, a[100],p,pos,i,j,count[100];
    printf("Enter the number of elements of a sorted array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",a+i);

    }
    printf("Enter the element to be added:\n");
    scanf("%d",&p);
    for (i=0;i<n;i++)
    {

        if (p>a[i-1]&&p<a[i])
        {
            pos=i;

        }
    }
    j=n;
    while (j>=pos)
    {
        a[j+1]=a[j];
        j--;
    }
    a[pos]=p;
    n=n+1;
    for (int k=0;k<n;k++)
    {
        printf("%d\t",*(a+k));
    }

    return 0;
}