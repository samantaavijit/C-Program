#include <stdio.h>
#include <stdlib.h>

void freqCount(char *s)
{
    int f[256]={0},i;
    for(i=0;*(s+i);i++)
    {
        f[*(s+i)]++;
    }

    for(i=0;*(s+i);i++)
    {
        if(f[*(s+i)]){
            printf("\n%c %d ",*(s+i),f[s[i]]);
            f[*(s+i)]=0;
        }
    }
}

int main()
{
    puts("Enter the String");
    char a[1000] ;
    gets(a);

    freqCount(a);
    return 0;
}
