#include <stdio.h>
int main() {
    int n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}