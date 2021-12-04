#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int stack[5];
int top=-1;

void push(int);
void pop();
void display();

int main()
{
    int ch;
    int num;
    while (1)
    {
        printf("Choose a number from the options given below: ");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            printf("\nEnter an element: ");
            scanf("%d", &num);
            push(num);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(1);
            break;

            default:
            printf("Invalid value...");
            break;

        }
    }
}
void push(int x)
{
    if(top==4)
	{
		printf("\nStack is full");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nStack is Empty...");
	}
	else
	{
		printf("\n %d Element is popped...",stack[top--]);
	}
}
void display()
{
	if(top==-1)
	{
		printf("Stack is Empty...");
	}
	else
	{
		printf("Stack Elements :\n");
		for(int i=top;i>=0;i--)
		printf("%d",stack[i]);
	}
}



