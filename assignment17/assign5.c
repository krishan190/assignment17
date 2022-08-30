#include <stdio.h>
int main()
{
    char a[10] = "KRISHAN";
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
        i++;
    }
    printf("%s", a);
    printf("\n");
}