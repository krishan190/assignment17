#include <stdio.h>
int main()
{
    char s[30];
    int alp_count, digit_count, spchar_count, i;
    alp_count = digit_count = spchar_count = i = 0;
    printf("Enter a string :");
    fgets(s, 30, stdin);
    while (s[i] != '\0')
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            alp_count++;
        else if (s[i] >= '0' && s[i] <= '9')
            digit_count++;
        else
            spchar_count++;
        i++;
    }
    printf("\n Number of alphabets: %d", alp_count);
    printf("\n Number of digit: %d", digit_count);
    printf("\n Number of special character: %d", spchar_count);
    printf("\n");
}