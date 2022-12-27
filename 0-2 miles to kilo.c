#include<stdio.h>
int main()
{
    float m;
    printf("Enter miles:");
    scanf("%f", &m);
    printf("%.2f km", m*1.6);
    return 0;
}