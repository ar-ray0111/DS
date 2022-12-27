#include<stdio.h>

int start = -1, end = -1, size = 5 ;
int QUEUE[100];

void insert();
void delete();
void display();

int main()
{
    int n;
    while(n!=4)
    {
        printf("Select the operation to perform:");
    printf("\n1.Insert\n2.Delete\n3.Display\n4.Quit");
        scanf("%d", &n);
    switch(n)
    {
    case 1:
        insert();
        break;
    case 2:
        delete();
        break;
    case 3:
        display();
        break;
    case 4:
        printf("Quitting...");
        break;
    
    default:
        printf("Please Enter Valid input...");
        break;
    }
    }
    return 0;
}


 void insert()
{
    int val;
    

    if (end == size - 1)
       { printf("OVERFLOW...");
        return ;
    }
    else 
    {
        if (start == -1)
        {
            start = 0;
            
        } 
        printf("Enter the value to be inserted:");
        scanf("%d", &val);
        
        end = end +1;
        QUEUE[end] = val;
        
    }

}


void delete()
{
    if (start==-1 || start > end)
        {printf("UNDERFLOW...\n");
        return ;
        }
    else
    {
        printf("ELEMENT %d is DELETED...\n", QUEUE[start]);
        start+=1;
    }
}

void display()
{
    if (start == -1 || start > end)
    {
        printf("QUEUE is EMPTY...\n");
        return ;
    }
    else 
    {
        printf("QUEUE is ...\n");
        for (int i = start; i <= end; i++)
        {
            printf("%d\t", QUEUE[i]);
        }
        printf("\n");
    }
}