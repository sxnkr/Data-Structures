// C program for the implementation of Circular Queue Data Structure
#include<stdio.h>
#include<stdlib.h>

int queue[20],size,rear,front;

void Enqueue(int item)
{
    if((rear+1)%size==front)
    {
        printf("Queue is full");
    }
    else if(front==-1)
    {
        front=rear=0;
        queue[rear]=item;
        printf("\n Pushed -> %d",item);
    }
    else
    {
        rear=(rear+1)%size;
        queue[rear]=item;
        printf("\n Pushed -> %d",item);
    }
}
void Dequeue()
{
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else if(front==rear)
    {
        printf("Dequeued item is %d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Dequeued item is %d",queue[front]);
        front=(front+1)%size;
    }
}
void Display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        if(front<=rear)
        {
            for(i=front;i<=rear;i++)
            {
                printf("%d\t",queue[i]);
            }
        }
        else
        {
            for(i=front;i<=size-1;i++)
            {
                printf("%d\t",queue[i]);
            }
            for(i=0;i<=rear;i++)
            {
                printf("%d ",queue[i]);
            }
        }
    }
}
void isFull()
{
    if(front==(rear+1)%size)
    {
        printf("Queue is full\n");
        Display();
    }
    else
    {
        printf("Queue is not full\n");
        Display();
    }
}

void isEmpty()
{
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Queue is not empty!\n");
        Display();
    }
}

void main()
{
    int choice,n;
    front=-1;
    rear=-1;
    printf("\n Enter the size of queue:- ");
    scanf("%d",&size);
    do
    {
        printf("\n 1.INSERTION\t 2.DELETION\t3.DISPLAY\t4.ISFULL\t5.ISEMPTY\t6.EXIT");
        printf("\nEnter your choice :- ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the value to be pushed:-  ");
            scanf("%d",&n);
            Enqueue(n);
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            Display();
            break;
            case 4:
            isFull();
            break;
            case 5:
            isEmpty();
            break;
            case 6:
            printf("\n\nExiting Program...\n\n");
            break;
            default:
            printf("\n Please enter a valid choice(1/2/3/4/5/6)");
        }
    }while(choice!=6);
//@sxnkr
}
