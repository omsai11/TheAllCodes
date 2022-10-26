#include<stdio.h>
#include<stdlib.h>

double fun(double x)
{
    return (x*x*x)-(x*x)+2;
}

void bisection(double xl,double xu)
{
    double xr,count=1;
    while(count<=1000)
    {
        xr=(xl+xu)/2;
        if(fun(xl)*fun(xr)==0)
        {
            printf("The root is:%lf\n",xr);
            break;
        }
        else if(fun(xl)*fun(xr)>0)
        {
            xl=xr;
        }
        else
        {
            xu=xr;
        }
    }
}

void main()
{
    double xl=-200,xu=300;
    bisection(xl,xu);
}