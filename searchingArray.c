#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);

    int* arr=malloc(n*sizeof(int));
    printf("Enter elements in array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d", arr+i);

    }

    int s;
    printf("Enter element to be searched:\n");
    scanf("%d",&s);
    for (int i=0;i<n;i++)
    {
        if(s==arr[i])
        {
            printf("The location of %d is %d", s,i);

        }
    }
        printf("\nThis program is made by Arjun Omray");

    return 0;
}