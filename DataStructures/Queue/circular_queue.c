#include<stdio.h>
int data[5];
int f=-1;
int r=-1;

void insert()
{
    
    if(f==0&&r==4||f==r+1)
    {
        printf("Queue is full\n");
    }
    else
    {
        r=(r+1)%5;
        printf("Enter data:\n");
       scanf("%d",&data[r]);
    }
    if(f==-1)
    {
        f=0;
    }
}
void delete()
{
    if(f==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {   if(f==r)
        {
        f=-1;r=-1;
        }
        else
        {
        printf("Deleted element is:%d\n",data[f]);
        f=(f+1)%5;
        }
    }
}
void display()
{printf("........\n");
    for(int i=f;i!=(r+1)%5;i=(i+1)%5)
    {
        printf("%d--->",data[i]);
    }
}
void main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    

    delete();
    delete();
    delete();
    insert();
    display();

}