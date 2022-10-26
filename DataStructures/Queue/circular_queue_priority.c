#include<stdio.h>
int data[5];
int f=-1;
int r=-1;
int max[5];
int min[5];
int maximum;

void sort()
{
    for(int i=f;i<=r;i++)
    {
            for(int j=i+1;j<=r;j++)
        {
            if(max[i]>max[j])
            {
                maximum=max[i];
                max[i]=max[j];
                max[j]=maximum;
            }
        }
       
    }
}

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
       max[r]=data[r];
       min[r]=data[r];
    }
    if(f==-1)
    {
        f=0;
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
    display();
    sort();
    printf("max %d\n",max[0]);
    printf("max %d\n", max[1]);
     printf("max %d\n",max[2]);
    printf("max %d\n", max[3]);
     printf("max %d\n", max[4]);}