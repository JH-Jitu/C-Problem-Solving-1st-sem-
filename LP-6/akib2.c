
#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter two integers :");
    scanf("%d%d", &x, &y);

    if (x > y)
    {
        printf("Largest number is %d.", x);
    }
    else
    {
        printf("Largest number is %d.", y);
    }
}
