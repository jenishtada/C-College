#include <stdio.h>
int main()
{
    int no1, no2, no3;

    printf("enterv three num:");
    scanf("%d %d %d", &no1, &no2, &no3);

    if (no1 >= no3)
    {
        printf("%d is greter", no1);
    }
    else if (no2 >= no3)
    {
        printf("%d is greter", no2);
    }
    else if (no3 >= no1)
    {
        printf("%d is greter", no3);
    }
    else
    {
        printf("%d is greter", no3);
    }
}
