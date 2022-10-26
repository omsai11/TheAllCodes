#include<stdio.h>
int data[10];
int f=0;
int r=-1;
void insert()
{
    if(r==9)
    {
        printf("Queue is full\n");
    }
        else
        {
            r++;
            printf("Enter the data:\n");
            scanf("%d",&data[r]);
        }
    
}
void delete()
{
    if(f==-1||f>r)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Deleted element is :%d\n",data[f]);
        f++;
    }
}
void display()
{
    for(int i=f;i<=r;i++)
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
        case 1:insert(); break;

        case 2:display(); break;

        case 3: display(); break;

        default : printf("Invalid\n");
        break;
      }  /* code */
    }
    
}