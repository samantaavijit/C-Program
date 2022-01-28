#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    //House rent :- hs, security :- sc, masi :- m, paper :- p, water :- w, electric :- e1,e2, gas :- g, guest :-gu
    int hs,sc,m,p,w,e1,e2,g,anu,asi,avi,sou,arj,i,pam=0,it=0,jit=0,vik=0,un=0,n,e3;
    int totalmarket,tmanu,tmasi,tmavi,tmarj,tmsou,totalmeal;
    char c;
    float permeal,estc,anupam,anupam1,asit,asit1,avijit,avijit1,arjun,arjun1,souvik,souvik1;
    printf("\nEnter the House Rent");
    scanf("%d",&hs);
    printf("Enter the Security Rent");
    scanf("%d",&sc);
    printf("enter the Rent of Masi");
    scanf("%d",&m);
    printf("Enter the Rent of paper");
    scanf("%d",&p);
    printf("Enter the Rent of Water");
    scanf("%d",&w);
    printf("Enter the Previous Electric Unit and Present Electronic Unit and Amount of Per Unit");
    scanf("%d%d%d",&e1,&e2,&e3);//Rent per unit :- e3
    printf("enter the Amount of Gas");
    scanf("%d",&g);
    estc=roundof((hs+sc+m+p+w+((e2-e1)*e3)+g)/5);
    for(i=0;i<14;i++)
    {
        printf("Enter the Total Meal");
        scanf("%d",&tmanu);
        printf("Enter the Amount of Market Price for Anupam");
        scanf("%d",&anu);
        pam=pam+anu;//Anupam
        printf("If Do not Print Again Enter 1");
        scanf("%d",&n);
        if(n==1)
        {
            break();
        }
    }
    for(i=0;i<14;i++)
    {
        printf("Enter the Total Meal");
        scanf("%d",&tmasi);
        printf("Enter the Amount of Market Price for Asit");
        scanf("%d",&asi);
        it=it+asi;//Asit
        printf("If Do not Print Again Enter 1");
        scanf("%d",&n);
        if(n==1)
        {
            break();
        }
    }
    for(i=0;i<14;i++)
    {
        printf("Enter the Total Meal");
        scanf("%d",&tmavi);
        printf("Enter the Amount of Market Price for Avijit");
        scanf("%d",&avi);
        jit=jit+avi;//Avijit
        printf("If Do not Print Again Enter 1");
        scanf("%d",&n);
        if(n==1)
        {
            break();
        }
    }
    for(i=0;i<14;i++)
    {
        printf("Enter the Total Meal");
        scanf("%d",&tmarj);
        printf("Enter the Amount of Market Price for Arjun");
        scanf("%d",&arj);
        un=un+arj;//Arjun
        printf("If Do not Print Again Enter 1");
        scanf("%d",&n);
        if(n==1)
        {
            break();
        }
    }
    for(i=0;i<14;i++)
    {
        printf("Enter the Total Meal");
        scanf("%d",&tmsou);
        printf("Enter the Amount of Market Price for Souvik");
        scanf("%d",&sou);
        vik=vik+sou;//Souvik
        printf("If Do not Print Again Enter 1");
        scanf("%d",&n);
        if(n==1)
        {
            break();
        }
    }
    printf("If any Guest Meal Enter y");
    scanf("%c",&c);
    if(c==Y||c==y)
    {
        printf("Enter the Total Guest");
        scanf("%d",&gu);
        gu=30*gu;
    }
    totalmarket=(pam+it+jit+un+vik)-gu;
    totalmeal=(tmanu+tmasi+tmavi+tmsou+tmarj);
    permeal=totalmarket/totalmeal;
    anupam=(pam-(parmeal*totalmeal));
    asit=(it-(parmeal*totalmeal));
    avijit=(jit-(parmeal*totalmeal));
    souvik=(vik-(parmeal*totalmeal));
    arjun=(jun-(parmeal*totalmeal));
    if(anupam<0)
    {
        anupam1=estc+anupam;
    }
    else
    {
        anupam1=estc-anupam;
    }
    if(asit<0)
    {
        asit1=estc+asit;
    }
    else
    {
        asit1=estc-asit;
    }
    if(avijit<0)
    {
        avijit1=estc+avijit;
    }
    else
    {
        avijit1=estc-avijit;
    }
    if(arjun<0)
    {
        arjun1=estc+arjun;
    }
    else
    {
        arjun1=estc-arjun;
    }
    if(souvik<0)
    {
        souvik1=estc+souvik;
    }
    else
    {
        souvik=estc-souvik;
    }
    printf("ANUPAM %f",anupam1);
    printf("ASIT %f",asit1);
    printf("AVIJIT %f",avijit1);
    printf("SOUVIK %f",souvik1);
    printf("ARJUN %f",arjun1);
    getch();
}
