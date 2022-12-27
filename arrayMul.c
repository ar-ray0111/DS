#include<stdio.h>
#include<stdlib.h>
int main()
{
     int h,g;
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
    int l,m;
    printf("Enter the row and column of array 2:");
    scanf("%d %d", &l,&m);

    
    int b[100][100];
    for (int i=0;i<l;i++)
    {
        for (int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if (l!=g)
    {
        printf("Error");
        return 1;
    }
    else
    {
        int sum[100][100];
    for (int i=0;i<h;i++)
    {
        for (int j=0;j<g;j++)
        {
            sum[i][j]=0;

        }

    }

    
    for (int i=0;i<h;++i)
    {
        for (int j=0;j<m;++j)
        {
            for (int k=0;k<g;++k)
            sum[i][j]+=a[i][k]*b[k][j];

        }
        
    }
    for (int i=0;i<h;i++)
    {
        for (int j=0;j<g;j++)
        {
        printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    
    }
    printf("\nThis program is made by Arjun Omray");
    return 0;
}