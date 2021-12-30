// C program for the implementation of Stack Data Structure
#include<stdio.h>
#include<stdlib.h>
int a[25],size,top;

void push (int item)
{
    if(top==size-1)
    {
        printf("\nStack is full");
    }
    else
    {
        top++;
        a[top]=item; 
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nThe popped elements is %d",a[top]);
        top--;
    }
}

void display()
{
    int i;
    if(top==-1)
    {
    printf("\n Stack is empty");
    }
    else
    {
        printf("\nThe elements in Stack");
        for(i=0;i<=top;++i)
        {
            printf("\n%d",a[i]);
        }
    }        
}

void status()
{
    float free;
    if(top==-1)
    {
	    printf("\nStack is empty");
    }
    else
    {
        printf("Stack top element is %d",a[top]);
        if(top==size-1)
	{
		printf("\nStack is full");
	}
        else
        {
        	free=(float)(size-top-1)*100/size;
        	printf("\nFree space= %f",free);
        }
    }
}

void main()
{
    int choice,n;
    top=-1;
    printf("\nEnter the size of stack:- ");
    scanf("%d",&size);
    do
    {
    printf("\n1.PUSH\t2.POP\t3.DISPLAY\t4.STATUS\t5.EXIT");
    printf("\nEnter your choice :- ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("Enter the value to be pushed:-\t");
    scanf("%d",&n);
    push(n);break;
    case 2:
    pop();break;
    case 3:
    display();break;
    case 4:
    status();break;
    case 5:
    printf("\nExiting Program...\n\n\n");
    break;
    default:
    printf("\n Please enter a valid choice(1/2/3/4/5)");
    }
    }while(choice!=5);
//@sxnkr
}
