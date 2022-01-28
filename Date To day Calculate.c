 #include<stdio.h>
 #include<conio.h>
 int GetNoOfDayInAMonth(int month,int year)
 {
     switch (month)
     {
     case 1:
         return 31; // January
     case 2:
         {
             if((year%4==0&&year%100!=0)||year%400==0) // February
                return 29;
             else
                return 28;
         }
     case 3:
        return 31;  // March
     case 4:
        return 30;  // April
     case 5:
        return 31;  // May
     case 6:
        return 30; // June
     case 7:
        return 31; // July
     case 8:
        return 31; // August
     case 9:
        return 30;
     case 10:
        return 31;
     case 11:
        return 30;
     case 12:
        return 31;
     }
 }
 int GetFirstDayOfaMonth(int year,int month,int day)
 {
     int a,y,m,c;

     a=(14-month)/12;
     y=year-a;
     m=month+(12*a)-2;
     c=(int) (day+y+(y/4)-(y/100)+(y/400)+((31*m)/12))%7;

     return c;
 }
 int main()
 {
     int year,month,day=1,firstDay;
     printf("\nEnter the Year ");
     scanf("%d",&year);
     printf("\nEnter the Month ");
     scanf("%d",&month);

     firstDay=GetFirstDayOfaMonth(year,month,day);

     printf("\nFirst day is %d",firstDay);

     return 0;
 }
