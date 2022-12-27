#include<stdio.h>
int main()
{
    int h,g,n,mid,low,high;
    printf("Enter the number of elements array :");
    scanf("%d", &h);
    
    
    int a[100];
    printf("Enter elements of array 1:\n");
    for (int i=0;i<h;i++)
    {
               
            scanf("%d",&a[i]);
        
    }
    printf("\nEnter the element to be searched:\n");
    scanf("%d",&n);
    low=0;
    high=h-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==n)
        {
                printf("%d is the position",mid);
                break;
        }
        else if (n<a[mid])
            {
                high=mid-1;
            }
        else if (n>a[mid])
            {
                low=mid+1;
            }
        else
            {
                printf("Element is not in array");
            }
        
            
        
    }
        printf("\nThis program is made by Arjun Omray");


    return 0;
}