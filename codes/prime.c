#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
        flag = 1;
    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            flag = 1;
    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}