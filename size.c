#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x; //���� ������ ���� x ����
    printf("[----- [������] [2020039104] -----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); //x ũ�� ���
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x ũ�� ���
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x ũ�� ���
}