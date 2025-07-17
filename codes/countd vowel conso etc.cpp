#include <stdio.h>
int main()
{
    char str[200];
    int i, vowels=0, consonants=0, digits=0, spaces=0;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    for(i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                consonants++;
        }
        else if(str[i]>='0' && str[i]<='9')
            digits++;
        else if(str[i]==' ')
            spaces++;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n", vowels, consonants, digits, spaces);
    return 0;
}
