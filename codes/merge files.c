#include <stdio.h>
int main(){
    FILE *f1,*f2,*f3;
    char c;
    printf("Merging file1.txt and file2.txt into merge.txt\n");
    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","r");
    f3=fopen("merge.txt","w");
    if(f1==NULL||f2==NULL||f3==NULL){
        printf("Error opening files\n");
        return 1;
    }
    while((c=fgetc(f1))!=EOF) fputc(c,f3);
    while((c=fgetc(f2))!=EOF) fputc(c,f3);
    fclose(f1);
    fclose(f2);
    fclose(f3);
    printf("Files merged successfully.\n");
    return 0;
}
