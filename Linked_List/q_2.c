// Write a program to find 3rd element of linked list from last in single pass.
#include <stdio.h>
#include <stdlib.h>

// define node structure
struct node
{
    int data;
    struct node *link;
};

// init. required pointer variable
struct node *head = NULL;

int length;

// this function will insert a new node at the end of list
void insert_at_end()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter a Node Data:- ");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *temp2;
        temp2 = head;
        while (temp2->link != NULL)
        {
            temp2 = temp2->link;
        }
        temp2->link = temp;
    }
}

// this function will show all the data of each node of list
void display()
{
    if (head == NULL)
    {
        printf("\nList is empty!!!");
    }
    else
    {
        struct node *temp;
        temp = head;
        printf("\nNodes :- ");
        while (temp->link != NULL)
        {
            printf("%d-->", temp->data);
            temp = temp->link;
        }
        printf("%d\n", temp->data);
    }
}

// This function will count the number of nodes present in the list.
int count()
{
    int count = 0;
    if (head == NULL)
    {
        return count;
    }
    else
    {
        struct node *temp;
        temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->link;
        }
        return count;
    }
}

// this function will show the 3rd element data from last.
void last_3rd_element()
{
    if (head == NULL)
    {
        printf("\nList is empty!!!");
    }
    else
    {
        int len = count();
        if(len < 3){
            printf("\nList must have 3 nodes!!!");
        }else{
            struct node *temp = head;
            int i;
            for(i=1;i<len-3+1;i++){
                temp = temp->link;
            }
            printf("\n3rd Element of List from Last is %d",temp->data);
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nSingle Linked List Operations: ");
        printf("\n1. Insert at End\n2. Display\n3. 3rd_Last_Element\n4. Count\n5. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            system("cls");
            insert_at_end();
            break;
        case 2:
            system("cls");
            display();
            break;
        case 3:
            system("cls");
            last_3rd_element();
            break;
        case 4:
            system("cls");
            length = count();
            printf("\nTotal Nodes are %d\n", length);
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("\nWrong Choice!!!\n");
            break;
        }
    }

    return 0;
}