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
    printf("Array before deletion\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    
    int pos;
    printf("\nEnter the element to be deleted:\n");
    scanf("%d", &pos);
    for (int i=pos;i<n;i++)
    {
        arr[i-1]=arr[i];
    } 
    n-=1;
    printf("Array after deletion\n");
      for (int i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}