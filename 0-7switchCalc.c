#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 2 Numbers");
    scanf("%d %d",&a,&b);
    printf("Choose operation:\n 1.Addition\n 2.Subtraction \n 3.Multiplication \n 4.Divivion\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("%d", a+b);
            break;
        case 2:
            printf("%d", a-b);
            break;
        case 3:
            printf("%d", a*b);
            break;
        case 4:
            printf("%.2f", (float)a/(float)b);
            break;
    }

}