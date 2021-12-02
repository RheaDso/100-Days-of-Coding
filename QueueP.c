#include<stdio.h>
#include<stdlib.h>

int front;
int back;
int queue[5];

void enQueue(int x)
{
    if(back==4)
    {
        printf("\nQueue is full.");
    }
    else
    {
        back++;
        queue[back]=x;
    }
}
void deQueue()
{
    if(front==back)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        front++;
        printf("Elements Dequeued are: %d", queue[front]);
    }
}
void display()
{
    printf("The elements are: ");
    for(int i=front+1; i<-back; i++)
    {
        printf("%d", queue[i]);
    }
}
int main(int argc, char const *argv[])
{
    front = -1;
    back = -1;
    int num;
    int ch;

    while(1)
    {
        printf("\n1.Enqueue");
        printf("\n2.Dequeue");
        printf("\n3.Display");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            printf("Enter an element: ");
            scanf("%d", &num);
            break;

            case 2:
            deQueue();
            break;

            case 3:
            display();
            break;

            default:
            printf("\nInvalid input...");
            exit(1);
        }
    }
    return 0;
}