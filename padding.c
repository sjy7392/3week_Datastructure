#include <stdio.h>

struct student { //student 구조체 선언
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    struct student pst; //구조체 변수 pst 선언
    
    printf("[----- [손지연] [2020039104] -----]\n");

    printf("size of student = %ld\n", sizeof(struct student)); //student 구조체 크기 출력
    printf("size of int = %ld\n", sizeof(int)); //int형 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short형 크기 출력
    
    return 0;
}