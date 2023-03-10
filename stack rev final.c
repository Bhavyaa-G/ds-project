#include<stdio.h>
#include <stdlib.h>
int stack[100],stack2[100],choice,n,x,i,popped;
int top2=-1;
int top=-1;
int top1;

void push()
{
    if(top>=n-1){
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
        top1=top;
    }
}

int pop()
{
    if(top==-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        int ans= stack[top];
        top--;
        return ans;
    }
}

void Reverse()
{
    if (top2==x-1) //base condition
        return;
    
    else if(top1==0){
        stack2[++top2]=stack2[top1];
    } 
    
    else{
        stack2[++top2]=stack[top1];
        top1--;
    }
    Reverse(); //recursion
}

void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
        printf("\n The STACK is empty");
}

void display2()
{
    if(top2>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top2; i>=0; i--)
            printf("\n%d",stack2[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}  

int main()
{
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.REVERSE\n\t 4.DISPLAY STACK\n\t 5.DISPLAY REVERSED STACK\n\t 6.EXIT\n\t");
    while(1)
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            printf("\n The element is popped");
            printf("\n Press Choice 4 to Display\n");
            break;
        case 3:
            if(top<=-1)
                printf("push elements first");
            else
            {
                Reverse();
                printf("\n The array is Reversed");
                printf("\n Press Choice 5 to Display\n");
                break;
            }
        case 4:
            display();
            break;
        case 5:
            display2();
            break;
        case 6:
            printf("\n\t EXIT POINT ");
            exit(0);
            break;
        default:
            printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6)");
        }
    }
}
