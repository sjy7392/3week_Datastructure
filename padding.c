#include <stdio.h>

struct student { //student ����ü ����
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main()
{
    struct student pst; //����ü ���� pst ����
    
    printf("[----- [������] [2020039104] -----]\n");

    printf("size of student = %ld\n", sizeof(struct student)); //student ����ü ũ�� ���
    printf("size of int = %ld\n", sizeof(int)); //int�� ũ�� ���
    printf("size of short = %ld\n", sizeof(short)); //short�� ũ�� ���
    
    return 0;
}