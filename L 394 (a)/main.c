#include <stdio.h>
#include <stdlib.h>

struct students
{
    int rollno;
    float permarks;
};

struct studinfo
{
    int rollno,centreno;
    char branch[10];
    float per;
};

struct students stu;
struct studinfo stuinfo;
FILE *fp,*sf;
char another='y';
int choice;

void insert_First_File()
{
    fp=fopen("STUD.DAT","a+");

    if(fp==NULL)
    {
        puts("Cannot open File");
    }

    while(another=='y')
    {
        printf("\nEnter the Roll No and Marks ");
        scanf("%d%f",&stu.rollno,&stu.permarks);
        fprintf(fp,"%d %f\n",stu.rollno,stu.permarks);

        printf("Add another record (y/n) ");
        fflush(stdin);
        another=getche();
    }
    fclose(fp);
}

void Insert_Second_File()
{
    sf=fopen("STUDENTS.DAT","a+");

    if(sf==NULL)
    {
        puts("Cannot open File");
    }

    while(another=='y')
    {
        printf("\nEnter the Roll No and Center and Branch ");
        scanf("%d%d%s",&stuinfo.rollno,&stuinfo.centreno,stuinfo.branch);
        fprintf(sf,"%d %d %s\n",stuinfo.rollno,stuinfo.centreno,stuinfo.branch);

        printf("Add another record (y/n) ");
        fflush(stdin);
        another=getche();
    }
    fclose(sf);
}

void Display_first_file()
{

    fp=fopen("STUD.DAT","r");
    if(fp==NULL)
    {
        puts("Cannot open file");
    }

    printf("Roll no     Marks");
    while(fscanf(fp,"%d%f",&stu.rollno,&stu.permarks)!=EOF)
    {
        printf("\n%d           %f",stu.rollno,stu.permarks);
    }
    fclose(fp);
}

void Display_second_file()
{
    sf=fopen("STUDENTS.DAT","r");
    if(sf==NULL)
    {
        puts("Cannot open file");
    }

    printf("Roll no    Center No          Branch");
    while(fscanf(sf,"%d %d %s",&stuinfo.rollno,&stuinfo.centreno,stuinfo.branch)!=EOF)
    {
        printf("\n  %d           %d               %s",stuinfo.rollno,stuinfo.centreno,stuinfo.branch);
    }
    fclose(sf);
}
int main()
{
    while(1)
    {
        printf("\n1. Insert Value of STUD.DAT ");
    printf("\n2. Insert Value of STUDENTS.DAT ");
    printf("\n3. Edit Value ");
    printf("\n4. Display Value of STUD.DAT ");
    printf("\n5. Display Value of STUDENTS.DAT ");
    printf("\n6. Exit");

    printf("\nEnter your Choice: ");
    scanf("%d",&choice);

    switch( choice)
    {
    case 1:
        insert_First_File();
        break;
    case 2:
        Insert_Second_File();
        break;
    case 3:
        break;
    case 4:
        Display_first_file();
        break;
    case 5:
        Display_second_file();
        break;
    case 6:
        exit(0);
    break;
        default:puts("Wrong Choice");
    }
    }

    return 0;
}
