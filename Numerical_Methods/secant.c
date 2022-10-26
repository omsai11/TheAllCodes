//Implementing Secant Method

#include<stdio.h>
#include<stdlib.h>

float fun(float x)
{
    return (x*x*x)-(3*x)+1;
}

void main()
{
 float x0=1;
 float x1=0;
 float xr;

do
{
    xr=(x1*fun(x0)-x0*fun(x1))/(fun(x0)-fun(x1));
    x1=x0;
    x0=xr;
}while(fun(xr)!=0);
printf("The root of equation is :%lf",xr);

}