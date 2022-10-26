#include<stdio.h>
#include<stdlib.h>

struct list
{
    int data;
    struct list *next;
};
struct list *top=NULL,*rear=NULL;
void insert_begin()
{
    struct list *p=(struct list*)malloc(sizeof(struct list));
    int val;
    printf("Enter the data\n");
    scanf("%d",&val);
    p->data=val;
    p->next=top;
    top=p;
}

void insert_end()
{   struct list *p=(struct list*)malloc(sizeof(struct list));
    int val;
    printf("Enter the data\n");
    scanf("%d",&val);
    p->data=val;

    if(rear==NULL)
    {
      rear=p;
        
    }
}