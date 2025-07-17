#include <stdio.h>
int main() {
    char op;
    float a,b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    switch(op){
        case '+': printf("%f\n", a+b); break;
        case '-': printf("%f\n", a-b); break;
        case '*': printf("%f\n", a*b); break;
        case '/': if(b!=0) printf("%f\n", a/b); else printf("Division by zero error\n"); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
