#include<stdio.h>
#include<stdlib.h>

int front;
int back;
int queue[5];

void enQueue(int x)
{
    if(back == 4)
    {
        printf("\nQueue is full...");
    }
    else
    {
        back++;
        queue[back] = x;
    }
}
void deQueue()
{
    if(front == back)
    {
        printf("\nQueue is empty");
    }
    else
    {
        front++;
        printf("\nElement deQueued is: %d",queue[front]);
    }
}
void display()
{
    printf("The Elements are: ");
    for(int i = front + 1; i <= back; i++)
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
        printf("n1.Enqueue \n2.Dequeue \n3.Display");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            printf("\nEnter a element: ");
            scanf("%d", &num);
            enQueue(num);
            break;

            case 2:
            deQueue();
            break;

            case 3:
            display();
            break;

            default:
            printf("\nInvalid Input");
            exit(1);
        }
    }
    return 0;
}