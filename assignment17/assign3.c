#include <stdio.h>
int main()
{
    char a[10] = "krishanaa";
    int i = 0, count = 0;
    while (a[i] != '\0')
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            count++;
        i++;
    }
    printf("%d", count);
    printf("\n");
    return 0;
}