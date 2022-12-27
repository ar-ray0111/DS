#include<stdio.h>
int main()
{
    int n ,p,t;
    printf("Enter Number:");
    scanf("%d", &n);
    printf("Enter power");
    scanf("%d", &p);
    t=n;
    for (int i=1 ; i<p; i++)
    {
        
        n*=t;
        
    }
    printf("%d",n);
    return 0;


}