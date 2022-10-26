//IMPLEMENTING THE GUASSIAN-ELIMINATION METHOD

#include<stdio.h>
#include<stdlib.h>

void main()
{
    float a[3][4];  //Augmented matrix
    float x[3];     //root matrix
    float p;
    

    printf("Enter the Augmented matrix as below:\n");
    printf("x x x x\nx x x x\nx x x x\n:-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }

    //Forward Elimination

    for(int k=0;k<=2;k++)
    {
        for(int i=(k+1);i<3;i++)
        {
            p=a[i][k]/a[k][k];
            for(int j=k;j<=3;j++)
            {
                a[i][j]=a[i][j]-p*a[k][j];
            }
        }
    }

    //Backward Substitution

    x[2]=a[2][3]/a[2][2];
    
    for(int i=1;i>=0;i--)
    {
        float sum=0;
        for(int j=(i+1);j<3;j++)
        {
            sum=sum+(a[i][j]*x[j]);
            x[i]=(a[i][3]-sum)/a[i][i];
        }
    }

    //Printing the roots
    printf("The roots of equation are:\n");
    for(int i=0;i<3;i++)
    {
        printf("Root of x%d : %f\n",i,x[i]);
    }
}

