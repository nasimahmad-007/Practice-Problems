#include <stdio.h>
void bubble_sort(int arra[], int *n)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *n - 1; j++)
        {
            if (arra[j] > arra[j + 1])
            {
                int temp = arra[j];
                arra[j] = arra[j + 1];
                arra[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arra[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arra[i]);

    bubble_sort(arra, &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arra[i]);
    }
}