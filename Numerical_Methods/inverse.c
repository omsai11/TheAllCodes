//Program to find the inverse of matrix
#include<stdio.h>
#include<stdlib.h>

void main()
{
float a[3][3];    //3 by 3 matrix
float det=0;        //Determinant
float m[3][3];    //3 by 3 matrix for cofactors


printf("Enter the elements in matrix\n");
for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    scanf("%f",&a[i][j]);

det=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[2][1]*a[1][0]-a[2][0]*a[1][1]);
printf("Determinant is %f\n",det);

if(det==0)
printf("Inverse doesn't exist\n");
else
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            m[i][j]=(a[(i+1)%3][(j+1)%3]*a[(i+2)%3][(j+2)%3]-a[(i+1)%3][(j+2)%3]*a[(i+2)%3][(j+1)%3]);
        }
    }
    printf("Inverse matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=m[j][i]/det;
            printf("%4lf\t",a[i][j]);
        }
        printf("\n");
    }
}
}
