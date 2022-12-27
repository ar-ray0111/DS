#include<stdio.h>
int main()
{   
    int h,i,n;
    int add;
    printf("Enter the number of elements array :");
    scanf("%d", &h);
    
    
    int a[100];
    printf("Enter elements of array 1:\n");
    for (int i=0;i<h;i++)
    {
               
            scanf("%d",&a[i]);
        
    }
    printf("Enter the position of which the address is to be known:\n");
    scanf("%d",&n);
    add=a+(sizeof(int)*(n-0));
    printf("The address is %d:",add);
    return 0;
}