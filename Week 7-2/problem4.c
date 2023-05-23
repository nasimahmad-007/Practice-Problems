#include <stdio.h>
float circle_area(int n)
{
    float pie = 3.1415;
    return pie * n * n;
}
int main()
{
    int radius;
    scanf("%d", &radius);

    printf("%f", circle_area(radius));
}