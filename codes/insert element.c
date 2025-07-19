#include <stdio.h>
int main()
{
    int a[100], n, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter the value to insert");
    scanf("%d", &value);
    for(i=n;i>n;i--)
        a[i]=a[i-1];
    a[pos]=value;
    n++;
    printf("Array after insertion-\n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n);
    return 0;
}
