#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

FILE *str1,*str2;
char ch;

void filePrint(char *s)
{
        while(1)
    {
        ch=fgetc(s);
        if(ch==EOF)
            break;
        else
            printf("%c",ch);
    }
}

int main()
{

    str1=fopen("template.txt","r");
    str2=fopen("Done.txt","w");

    filePrint(str1);

    printf("\n\n\n");

    filePrint(str2);

    fclose(str1);
    fclose(str2);
    return 0;
}
