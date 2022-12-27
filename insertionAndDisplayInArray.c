#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array:\n");

    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d", arr+i);

    }

    //inserting elements
    int p,r;
    printf("Enter the position of insertion:\n");
    scanf("%d",&p);
    printf("Enter the element:\n");
    scanf("%d", &r);

    int j=n;
    while (j>=p)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[p]=r;
    n=n+1;

    for (int i=0;i<n;i++)
    {
        printf("%d\t", *(arr+i));
    }
    return 0;
}