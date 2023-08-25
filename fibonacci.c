#include <stdio.h>
int main()
{
    int n, t1, t2, t3;
    t1 = 0, t2 = 1;

    printf("enter num. of terms:");
    scanf("%d", &n);

    t3 = t1 + t2;

    while (t3 <= n)
    {
        printf("%d\n", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
}