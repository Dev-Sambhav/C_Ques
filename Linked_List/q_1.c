// Write a program to reverse a singly linked list.
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

// this function will reverse the list
void reverse()
{
    if (head == NULL)
    {
        printf("\nList is empty!!!");
    }
    else
    {
        int i, j, len,temp;
        len = count();
        i = 1;
        j = len;
        // we need two structure pointer first one point to first node and second one point to last node
        struct node *p, *q;
        p = head;
        q = head;
        while (i < j)
        {
            int k = 1;
            while (k < j)
            {
                q = q->link;
                k++;
            }
            // now q is pointing to last node
            // swap the node data
            temp = p->data;
            p->data = q->data;
            q->data = temp;
            i++;
            j--;
            p = p->link;
            q = head;
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nSingle Linked List Operations: ");
        printf("\n1. Insert at End\n2. Display\n3. Reverse\n4. Count\n5. Exit");
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
            reverse();
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