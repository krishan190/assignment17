#include <stdio.h>
int main()
{
    char s[20] = "Krihsna", b[20];
    int l, i = 0;
    for (l = 0; s[l]; l++)
        ;
    for (i = 0; i < l; i++)
    {
        b[i] = s[i];
    }
    printf("copying string %s", b);
    printf("\n");
}