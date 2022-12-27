#include<stdio.h>
int stack[100],op,n,size,top=-1;


void pop()
{
    if (top==-1)
    {
        printf("\nunderflow\n");

    } 
    else
    {
        printf("%d is popped\n", stack[top]);
        top -=1;
    } 
}


void push()
{
    int val;
    if (top == n-1)
    {
        printf("\noverflow\n");

    }
    else
    {
        printf("Enter the value:");
        scanf("%d",&val);
        top+=1;
        stack[top]=val;
    }
}
   
void peak()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d\n", stack[top]);
    }
}
   
void show()
{
    if (top == -1)
    {
        printf("\nstack is empty\n");
    }
    else 
    {
        for (int i=top;i>=0;i--)
        {
            printf("%d\t", stack[i]);

        }
        printf("\n");
    }
}



int main()
{
    
    printf("Enter size of array");
    scanf("%d", &n);
    while (op!=5)
    {    printf("Select the operation to be performed\n1.push\n2.pop\n3.peak\n4.show\n5.exit\n");
        printf("Enter choice");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:
            show();
            break;

        case 5:
            printf("Exiting....");
            break;
        
        default:
            printf("Invalid input");
            
        }}
    return 0;
}