#include<stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
};
struct list *top=NULL;
void push()
{
    struct list *p=(struct list*)malloc(sizeof(struct list));
    int val;
    printf("Enter the data\n");
    scanf("%d",&val);
    p->data=val;
    p->next=top;
    top=p;
}
void pop()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        struct list *ptr=top;
        printf("Deleted element is:%d\n",ptr->data);
        top=top->next;
        free(ptr);
    }
}
void display()
{
    struct list *ptr1=top;
    while(ptr1!=NULL)
    {
        printf("%d-->",ptr1->data);
        ptr1=ptr1->next;
    }
    printf("\n")
}
void main()
{
    push();
    push();
    push();
    push();
    display();
    pop();
    pop();
    display();
}
