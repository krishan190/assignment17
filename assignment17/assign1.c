#include <stdio.h>
int main()
{
    char a[] = "Krishna";
    int i = 0, count = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);
    printf("\n");
}