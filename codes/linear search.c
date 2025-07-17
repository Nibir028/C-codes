#include <stdio.h>
int main()
{
    int a[100], n, key, found=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Element found at position %d\n", i+1);
            found=1;
            break;
        }
    }
    if(!found)
        printf("Element not found\n");
    return 0;
}
