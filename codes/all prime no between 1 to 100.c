#include <stdio.h>
int main() {
    printf("Prime numbers between 1 and 100:\n");
    for(int i = 2; i <= 100; i++) {
        int flag = 0;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(!flag) printf("%d ", i);
    }
    return 0;
}