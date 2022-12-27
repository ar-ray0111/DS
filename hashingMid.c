#include<stdio.h>

int main()
{
    int hash[100];
    int i,n,m;
    for (i=0;i<100;i++)
    {
        hash[i]=0;
    }

    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
   for (i=0;i<n;i++)
   {
        scanf("%d",&m);
        int sq = m*m;
        sq/=100;
        sq%=100;
        hash[sq]= m;
   }
    printf("\n The hash table is:\n");
    for(i=0;i<100;i++)
    {
        printf("%d\t",hash[i]);
    }
    
    return 0;
    
}