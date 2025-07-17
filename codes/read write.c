#include <stdio.h>
int main(){
    FILE *f;
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^]", str);
    f=fopen("file.txt","w");
    fprintf(f,"%s",str);
    fclose(f);
    f=fopen("file.txt","r");
    fgets(str,100,f);
    printf("File content: %s\n",str);
    fclose(f);
    return 0;
}