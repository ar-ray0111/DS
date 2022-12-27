#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements in array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d", arr+i);

    }

    int l=0;
    for (int i=0;i<n;i++)
    {
        if (l<arr[i])
        {
            l=arr[i];
        }
        else 
        {
            continue;
        }
    }
    printf("The largest element is : %d", l);
    printf("\nThis program is made by Arjun Omray");

    return 0;
}