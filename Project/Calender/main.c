#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define DAY 1

int currentYear,currentMonth,currentFirstDay;

int GetFirstDayOfaMonth(int year,int month)
 {
     int a,y,m,c;

     a=(14-month)/12;
     y=year-a;
     m=month+(12*a)-2;
     c=(int) (DAY+y+(y/4)-(y/100)+(y/400)+((31*m)/12))%7;

     return c;
 }

 void Display(int y,int m,int firstDay)
 {
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int weekDays,day,countt=firstDay;

    printf("\Next Month to press RIGHT ARROW ");
    printf("\nPrevious Month to press LEFT ARROW ");
    printf("\nNext Year to press UP ARROW ");
    printf("\nPrevious Year to press DOWN ARROW ");

    // For Leap year
    if((y%4==0&&y%100!=0)||y%400==0)
        monthDays[1]=29;

    printf("\n\n\n  -----------------------------------");
    printf("\n             %s     %d",months[m-1],y);
    printf("\n  -----------------------------------");

    printf("\n\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    for(weekDays=0;weekDays<firstDay;weekDays++)
            printf("     ");

    for(day=1;day<=monthDays[m-1];day++)
    {
        printf("%5d",day);
        countt++;
        if(countt>6)
        {
            printf("\n");
            countt=0;
        }
    }
 }

void GetInput()
{
   int c=getch();

    switch (c)
    {
    case 77:// RIGHT ARROW
        {
            system("cls");
            currentMonth++;
            if(currentMonth>12)
            {
                currentMonth=1;
                currentYear++;
            }
            currentFirstDay=GetFirstDayOfaMonth(currentYear,currentMonth);
            Display(currentYear,currentMonth,currentFirstDay);
            break;
        }
    case 75: // LEFT ARROW
        {
            system("cls");
            currentMonth--;
            if(currentMonth<1)
            {
                currentMonth=12;
                currentYear--;
            }
            currentFirstDay=GetFirstDayOfaMonth(currentYear,currentMonth);
            Display(currentYear,currentMonth,currentFirstDay);
            break;
        }
    case 72:// UP ARROW KEY
        {
            system("cls");
            currentYear++;
            currentFirstDay=GetFirstDayOfaMonth(currentYear,currentMonth);
            Display(currentYear,currentMonth,currentFirstDay);
            break;
        }
    case 80:// DOWN ARROW KEY
        {
            system("cls");
             currentYear--;
            currentFirstDay=GetFirstDayOfaMonth(currentYear,currentMonth);
            Display(currentYear,currentMonth,currentFirstDay);
            break;
        }
    }
}
int main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);

    currentMonth=stime.wMonth;
    currentYear=stime.wYear;

    // Get the First Day of a Month
    currentFirstDay=GetFirstDayOfaMonth(currentYear,currentMonth);

    // To print the all date of a Month
    Display(currentYear,currentMonth,currentFirstDay);

    while(1)
    {
        GetInput();
    }
    return 0;
}
