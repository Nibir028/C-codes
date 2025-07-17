#include <stdio.h>
int main(){
    int a=5;
    int *p=&a;
    printf("Value: %d\n", *p);
    printf("Address: %p\n", p);
    p++;
    printf("After incrementing pointer: %p\n", p);
    return 0;
}