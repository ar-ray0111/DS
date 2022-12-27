#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of students:");
    scanf("%d", &n);
    int arr[100];
    for (int i=0;i<n;i++)
    {
        scanf("%d", arr+i);

    }
    int avg=0;
    for (int i=0;i<n;i++)
    {
        avg=avg+arr[i];
    }
    printf("Avg of students: %d\n", avg/n);
    printf("\nThis program is made by Arjun Omray");
    return 0;

}