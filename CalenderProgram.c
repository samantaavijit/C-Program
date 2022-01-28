#include<stdio.h>
#include<stdlib.h>

int Get_First_WeekDay(int year)
{
    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}
int main()
{
    system("COLOR 3F");

    int year,weekDays=0,startingDay;
    printf("\nEnter your Desired Year : ");
    scanf("%d",&year);

    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};

    // For Leap year
    if((year%4==0&&year%100!=0)||year%400==0)
        monthDays[1]=29;

    startingDay=Get_First_WeekDay(year);  // Get the Starting Date

    // Print Month and Days
    for(int month=0;month<12;month++)
    {
        printf("\n\n---------------%s---------------",months[month]);
        printf("\n\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

        for(weekDays=0;weekDays<startingDay;weekDays++)
            printf("     ");

        // Print the date in particular Month
        for(int day=1;day<=monthDays[month];day++)
        {
            printf("%5d",day);

            if(++weekDays>6)
            {
                 printf("\n");
                 weekDays=0;
            }
            startingDay=weekDays;
        }
    }
}
