#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;               
    struct node *next;
};

struct node *head, *newnode, *temp, *prevnode, *nextnode;
int count=0;

void create()
{
    int ch;
    head = 0;
    printf("Enter number of element: ");
    scanf("%d", &ch);

    if(ch<0)
    {
        printf("------Invalid Input------");
    }
    else{
        while (ch>0){
            newnode = (struct node*)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &newnode->data);
            newnode -> next = 0;

            if(head==0){
                head=temp=newnode;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
            ch--;
        }
    }
}
void insertAtBeginning()
{
    if(head==0)
    {
        printf("The list is empty...");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}
void delFromEnd()
{
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=0;
    }
    else
    {
        prevnode->next=0;
    }
    free(temp);
}
void deleteAtPosition()
{
    int pos, i=1;
    temp=head;

    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
void display()
{
    temp=head;

    while(temp!=0)
    {
        printf("Data is: %d", temp->data);
        temp=temp->next;
    }
    getch();
}
void getLength()
{
    temp=head;
    count=0;

    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("Length is: %d", count);
}
int main()
{
    int ch;
    create();

    while(1)
    {
        printf("\n1. Insert At the Beginnning");
        printf("\n2. Insert At the End");
        printf("\n3. Insert After a given Position");
        printf("\n4. Delete From Beginning");
        printf("\n5. Delete from End");
        printf("\n6. Delete from a Position");
        printf("\n7. Display the Linked List");
        printf("\n8. Length of the Linked List");
        printf("\n9. Exit");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            insertAtBeginning();
            break;

            case 2:
            delFromEnd();
            break;

            case 3:
            deleteAtPosition();
            break;

            case 4:
            display();
            break;

            case 5:
            getLength();
            break;
        }        
    }
    return 0;
}