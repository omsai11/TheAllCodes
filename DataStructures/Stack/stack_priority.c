#include<stdio.h>
#include<stdlib.h>

int data[5];
int top=-1;
int maxarr[5];
int minarr[5];

void push()
{
    if(st==4)
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        printf("Enter the data:\n");
        scanf("%d",&data[top]);
        
    }
}
void pop_max()
{   
    
}