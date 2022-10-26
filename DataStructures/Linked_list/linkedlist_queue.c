#include<stdio.h>
#include<stdlib.h>

struct list
{
    int data;
    struct list *next;
};
struct list *top=NULL;
struct list *rear=NULL;

void insert()
{
    struct list *p=(struct list*)malloc(sizeof(struct list));
    int val;
    printf("Enter the data:\n");
    scanf("%d",&val);
     p->data=val;
    if(top==NULL)
    {
        top=p;
        rear=p;
        top->next=NULL;
        rear->next=NULL;
    }
    else
    {
    rear->next=p;
    rear=p;
    rear->next=NULL;
    }
}
void delete()
{
    if(top==rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct list *ptr=top;
        printf("Deleted element is %d\n",ptr->data);
        top=top->next;
        free(ptr);
    }
}
void display()
{
    struct list *ptr2=top;
    while(ptr2!=NULL)
    {
        printf("%d--->",ptr2->data);
        ptr2=ptr2->next;
    }
    printf("\n");
}
void main()
{
    int o;
    while (1)
    {
      printf("Enter\n1.push\n2.pop\n3.display\n");
      scanf("%d",&o);
      switch(o)
      {
        case 1:insert(); break;

        case 2:delete(); break;

        case 3: display(); break;

        default : printf("Invalid\n");
        break;
      }  /* code */
    }

}