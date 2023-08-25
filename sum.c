#include <stdio.h>
#include <conio.h>
void main()
{
    int first, second, add, subtract, mutiply;
    float divide;

    printf("enter two value:");
    scanf("%d %d", &first, &second);

    add = first + second;
    subtract = first - second;
    mutiply = first * second;
    divide = first / second;

    printf("%d+%d=%d\n", first, second, add);
    printf("%d-%d=%d\n", first, second, subtract);
    printf("%dx%d=%d\n", first, second, mutiply);
    printf("%d/%d=%.2f\n", first, second, divide);
    getch();
}