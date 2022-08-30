#include <stdio.h>
int main()
{
    char a[10] = "krishna";
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
        i++;
    }
    printf("%s", a);
    printf("\n");
}