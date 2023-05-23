#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arra[n];
    int *ptr = arra;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arra;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}