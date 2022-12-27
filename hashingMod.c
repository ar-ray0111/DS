#include<stdio.h>

int main()
{
    int hash[11];
    int i,n,m;
    for (i=0;i<11;i++)
    {
        hash[i]=0;
    }

    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
   for (i=0;i<n;i++)
   {
        scanf("%d",&m);
        hash[m%10]=m;
   }
    printf("\n The hash table is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",hash[i]);
    }
    
    return 0;
    
}