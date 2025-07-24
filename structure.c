#include <stdio.h>
#include <string.h>
struct mystructure{
    int roll;
    char ch;
    float marks;
    char string1[30];
};

int main() {
    struct mystructure s1;

    s1.roll = 1;
    s1.ch = 'a';
    s1.marks = 1.23;
    strcpy(s1.string1,"shivam");
    printf("myrollnumber = %d\n",s1.roll);
    printf("my name = %c\n",s1.ch);
    printf("my marks = %f\n",s1.marks);
    printf("my name  = %s",s1.string1);
    return 0;
}
