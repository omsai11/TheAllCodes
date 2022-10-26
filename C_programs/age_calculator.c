//AGE FINDER
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int present_year,present_month,present_day; //present day,mont,year
    int birth_year,birth_month,birth_day;       //birth day,month,year

    int days,months,years;      //age storing in these integers

    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};      //all days in months

    printf("Enter the present date in format\ndate month year\n:");
    scanf("%d",&present_day);
    scanf("%d",&present_month);
    scanf("%d",&present_year);

    printf("___________________________________________\n");

    printf("Enter the Birth date in format\ndate month year\n:");
    scanf("%d",&birth_day);
    scanf("%d",&birth_month);
    scanf("%d",&birth_year);

    printf("*******************************************\n");

    years=present_year-birth_year;

    if(birth_month>present_month)
    {
        months=12+present_month-birth_month;
        years=years-1;
    }
    else
    {
        months=present_month-birth_month;
    }

    if(birth_day>present_day)
    {
        days=a[present_month]+present_day-birth_day;
    

        if(birth_month<present_month)       //if birth_month>present_month  years=years-1 must execute only once thats why this condition is here
        {   months=12+present_month-birth_month-1;
            years=years-1;}
    }
    else
    {
        days=present_day-birth_day;
    }
    printf("YOUR AGE IS:\n%d days %d months %d years\n",days,months,years);     //printing the age
}