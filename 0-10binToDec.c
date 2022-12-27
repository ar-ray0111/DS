#include<stdio.h>
#include<math.h>


int main()
{
    int bin, rem, i, dec=0;
    printf("Enter the binary number:");
    scanf("%d", &bin);
    i=0;
   while(bin>0)
    {
        rem=bin%10;
        
        dec=dec+rem*pow(2,i);
        i++;
        bin=bin/10;
    }
    printf("%d", dec);
    return 0;
}