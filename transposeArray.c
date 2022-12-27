#include<stdio.h>
int main()
{
    int h,g,i,j;
    int tra[10][10];
    printf("Enter the row and column of array 1:");
    scanf("%d", &h);
    scanf("%d", &g);
    
    int a[100][100];
    printf("Enter elements of array 1:\n");
    for (int i=0;i<h;i++)
    {
        for (int j=0;j<g;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<h;i++)
    {
        for (j=0;j<g;j++)
        {
            tra[j][i]=a[i][j];
        }
    }
    printf("\nThe transpose of the entered matrix is\n");
        for (i=0;i<g;i++)
    {
        for (j=0;j<h;j++)
        {
            printf("%d\t",tra[i][j]);
        }
        printf("\n");
    }
        printf("\nThis program is made by Arjun Omray");

    return 0;
}