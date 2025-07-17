#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Largest number: %d\n", a);
    else
        printf("Largest number: %d\n", b);
    return 0;
}