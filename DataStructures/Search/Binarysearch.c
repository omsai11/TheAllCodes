#include<stdio.h>
#include<stdlib.h>
int arr[10];
int min,max,key,mid;
int recursion();
void notfound();
int main()
{
 printf("enter the values in array\n");
for(int i=0;i<=9;i++)
{
 scanf("%d",&arr[i]);
}
printf("enter the key:");
scanf("%d",&key);
min=0,max=9;
recursion();
}
int recursion()
{
for(int i=min;i<=max;i++)
{
mid=(min+max)/2;
if(key==arr[mid])
{
    printf("we found it:%d\n",arr[mid]);
    exit(1);
}
else if(key<arr[mid])
{
    max=(mid-1);
    recursion();
}
else if(key>arr[mid])
{
    min=(mid+1);
    recursion();
}
else{
    notfound();
}
}

}
void notfound()
{
    printf("not found");
}