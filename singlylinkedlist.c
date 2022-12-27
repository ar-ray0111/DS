#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node * next;
};

struct node *head;

void begininsert();
void lastinsert();
void randominsert();
void begindel();
void lastdel();
void randomdel();
void search();
void display();

void main()
{
    int choice;
    while (choice!=9){
        printf("\n----------MAIN MENU-------\n");
        printf("Choose one of the following options\n");

        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location \n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter choice:");
        scanf("%d",&choice); /*  
        switch(choice)
        {
            case 1:
                begininsert();
                break;
            case 2:
                lastinsert();
                break;
            case 3:
                randominsert();
                break;
            case 4:
                begindel();
                break;
            case 5:
                lastdel();
                break;
            case 6:
                randomdel();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
            default:
                printf("Enter valid choice:");


        } */
    }
}