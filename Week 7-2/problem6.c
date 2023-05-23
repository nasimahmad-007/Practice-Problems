#include <stdio.h>
void low_to_up(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (((str[i] - 'a') + 1) % 2 == 0)
        {
            str[i] = 'A' + (str[i] - 'a');
        }
    }
}
int main()
{
    char str[100];
    scanf("%s", str);

    low_to_up(str);

    printf("%s", str);
}