#include <stdio.h>
int sum(int arra[], int n)
{
    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        if (arra[i] % 10 == 0)
            summ += arra[i];
    }
    return summ;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arra[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arra[i]);

    printf("%d", sum(arra, n));
}