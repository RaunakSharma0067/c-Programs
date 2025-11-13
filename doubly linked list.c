#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next, *prev;
} *start = NULL;

void display()
{
    struct node *temp = start;
    if (temp == NULL)
    {
        printf("list is empty");
        return;
    }
    printf("Node is \n");
    while (temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
void insert(int n)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("not allocate the memory");
        return;
    }

    newnode->data = n;
    newnode->next = NULL;

    if (start == NULL) // list empty ho to;
    {
        newnode->prev = newnode->next = NULL; // firt node ka previous nahi hota
        start = newnode;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}
int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
}