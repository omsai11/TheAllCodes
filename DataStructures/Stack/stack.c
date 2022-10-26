#include<stdio.h>
int data[5];
int st=-1;

void push()
{
    if(st==4)
    {
        printf("Stack is full\n");
    }
    else
    {
        st++;
        printf("Enter the data:\n");
        scanf("%d",&data[st]);
    }
}
void pop()
{
    if(st==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Deleted element is :%d",data[st]);
        st--;
    }
}
void display()
{
    for(int i=0;i<=st;i++)
    {
        printf("%d-->",data[i]);
    }
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
        case 1:push(); break;

        case 2:pop(); break;

        case 3: display(); break;

        default : printf("Invalid\n");
        break;
      }  /* code */
    }
    
}