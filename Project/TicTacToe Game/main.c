#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};
int i,m=0,cc=1;
void show()
{
    printf("\n\n\t\t %c | %c | %c",a[0],a[1],a[2]);
    printf("\n\t\t---|---|---");
    printf("\n\t\t %c | %c | %c",a[3],a[4],a[5]);
    printf("\n\t\t---|---|---");
    printf("\n\t\t %c | %c | %c",a[6],a[7],a[8]);

}
void getInput()
{
    char po;
    if(m==0)
    {
        printf("\n\nEnter the position for First player (x) ");
        po=getche();
    }
    else
    {
        printf("\n\nEnter the position for Second player (o) ");
        po=getche();
    }

    if(m==0)
    {
        for(i=0;i<9;i++)
        {
            if(a[i]==po)
            {
                a[i]='x';
                m=1;
                break;
            }
        }
    }
    else
    {
        for(i=0;i<9;i++)
        {
            if(a[i]==po)
            {
                a[i]='0';
                m=0;
                break;
            }
        }
    }
}
void endGame()
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x')||(a[1]=='x'&&a[4]=='x'&&a[7]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x')||(a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[6]=='x'&&a[4]=='x'&&a[2]=='x'))
    {
        printf("\n\nFIRST Player is Win!!");
        //printf("\a");
        Beep(750, 10000);
        cc=0;
    }
    if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0')||(a[1]=='0'&&a[4]=='0'&&a[7]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[3]=='0'&&a[4]=='0'&&a[5]=='0')||(a[6]=='0'&&a[7]=='0'&&a[8]=='0')||(a[2]=='0'&&a[5]=='0'&&a[8]=='0')||(a[6]=='0'&&a[4]=='0'&&a[2]=='0'))
    {
        printf("\n\nSECOND Player is Win!!");
        //printf("\a");
        Beep(750, 10000);
        cc=0;
    }
    if(a[0]!='1'&&a[1]!='2'&&a[2]!='3'&&a[3]!='4'&&a[4]!='5'&&a[5]!='6'&&a[6]!='7'&&a[7]!='8'&&a[8]!='9')
    {
        printf("\n\nTry Again!!! All position is Full");
        printf("\a");
        cc=0;
    }
}

int main()
{
    show();
    while(cc)
    {
        getInput();
        system("cls");
        show();
        endGame();
    }
    return 0;
}
