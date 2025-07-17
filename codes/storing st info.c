#include <stdio.h>
struct student{
    char name[50];
    int age;
    float marks;
};
int main(){
    struct student s;
    printf("Enter name age marks: ");
    scanf("%s %d %f", s.name, &s.age, &s.marks);
    printf("%s %d %.2f\n", s.name, s.age, s.marks);
    return 0;
}
