#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("Enter the String\n");
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    for(int i=0;i<n;i++)
        puts(arr[i]);

    return 0;
}
