//program to sort the given array in ascending order
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[10]={3,6,2,4,1,7,9,8,0,5};
    int i,temp;

    //loop for comparing
    //temp is used for swapping

    for(i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;  
            }
        }
    }

    //display loop
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}