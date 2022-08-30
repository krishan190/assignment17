#include <stdio.h>
int main()
{
    char a[10] = "Krishana";
    char b = 'a';
    int i = 0, count;
    while (a[i] != '\0')
    {
        if (a[i] == b)
            count++;
        i++;
    }
    printf("%d", count);
    printf("\n");
}