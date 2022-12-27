#include<stdio.h>
int main()
{
    int n, a[100],j,i,count[100];
    printf("Enter the number of elements of an array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",a+i);

    }
    for (i=0;i<n;i++)
    {
        count[i]=0;
        for (j=0;j<n;j++)
        {
            if (a[i]==a[j])
            {
                count[i]+=1;
            }
        }
        printf("%d is repeated %d times\n",a[i],count[i]);
        
    }
    return 0;
}