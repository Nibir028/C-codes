#include <stdio.h>
int main()
{
    char str[100];
    int i, length = 0, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[length] != '\0')
        length++;
    for(i=0;i<length/2;i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
