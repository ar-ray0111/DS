#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d %d", &a,&b);

    if (a==b)
        printf("a=%d, b=%d a=b", a,b);
    else if (a>b)
        printf("a=%d, b=%d a>b", a,b);
    else 
        printf("a=%d, b=%d a<b", a,b);
    return 0;
}