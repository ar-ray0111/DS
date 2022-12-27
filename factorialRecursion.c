#include<stdio.h>

int fact(int n);

int fact(int n)
{
    if (n==1)
        return 1;
    else if (n==2)
        return 2;
    else 
        return fact(n-1)*n;
}

int main()
{   
    int n,f;
    printf("Enter number");
    scanf("%d",&n);
    f=fact(n);
    printf("\n the factorial is %d", f);
    return 0;
}