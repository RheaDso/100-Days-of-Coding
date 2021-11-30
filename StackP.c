#include<stdio.h>

struct node{
    int info;
    struct node* link;
};
struct node* start = NULL;

void transverse()
{
    struct node* temp;
    if(start==NULL)
    printf("\nList is Empty");

    else
    {
        temp=start;
        while(temp!=NULL)
        {
            printf("Data=%d\n", temp->info);
            temp=temp->link;
        }
    }
}
void insertAtFront()
{
    int data;
    struct node* temp;
    temp=malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->info=data;

    temp->info=start;
    start=temp;
}
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp=malloc(sizeof(struct node));

    printf("Enter number to be inserted: ");
    scanf("%d", &data);

    temp->link=0;
    temp->info=data;
    head=start;

    while(head->link!=NULL)
    {
        head=head->link;
    }
    head->link = temp;
}
void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i=1;
    newnode = malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("Enter the data: ");
    scanf("%d", &data);

    temp = start;
    newnode->info=data;
    newnode->link=data;
    while(i<pos-1)
    {
        temp=temp->link;
        i++;
    }
    newnode->link=temp->link;
    temp->link=newnode;
}
void deleteFirst()
{
    struct node* temp;
    if(start==NULL)
    printf("List is empty\n");
    else
    {
        temp=start;
        start=start->link;
        free(temp);
    }
}
void deleteEnd()
{
    struct node *temp, *prevnode;
    if(start==NULL)
    printf("\nList is Empty...");
    else
    {
        temp=start;
        while(temp->link!=0)
        {
            prevnode=temp;
            temp=temp->link;
        }
        free(temp);
        prevnode->link=0;
    }
}
void deletePosition()
{
    struct node *temp, *position;
    int i=1, pos;

    if(start==NULL)
    printf("List is empty...");
    else{
        printf("Enter the index: ");
        scanf("%d", &pos);
        position =  malloc(sizeof(struct node));
        temp=start;
        while(i<pos-1)
        {
            temp=temp->link;
            i++;
        }
        position=temp->link;
        temp->link=position->link;
        free(position);
    }
}
void sort()
{
    struct node* current=start;
    struct node* index=NULL;
    int temp;

    if(start==NULL)
    {
        return;
    }
    else
    {
        while(current!=NULL)
        {
            index=current->link;
            while(index!=NULL){
                if(current->info > index->info)
                temp=current->info;
                current->info = index->info;
                index->info=temp;
            }
            index=index->link;
        }
        current=current->link;
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Display");
        printf("\n2.Insertion at the start");
        printf("\n3.Insertion at end");
        printf("\n4.Insertion at any position");
        printf("\n5.Deletion of first element");
        printf("\n6.Deletion of last element");
        printf("\n7.Deletion of element at any position");
        printf("\n8.Search");
        printf("\n9.Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: 
            transverse();
            break;

        case 2:
            insertAtFront();
            break;

        case 3:
            insertAtEnd();
            break;

        case 4:
            insertAtPosition();
            break;

        case 5:
            deleteFirst();
            break;

        case 6:
            deleteEnd();
            break;

        case 7:
            deletePosition();
            break;

        case 8:
            sort();
            break;

        case 9:
            exit(1);
            break;

        default:
            printf("Incorrect Choice: ");        
        }
    }
    return 0;
}