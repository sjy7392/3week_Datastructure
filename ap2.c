#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //ũ�� 5�� �迭 ����
    int *plist[5]; //ũ�� 5�� ������ �迭 ����

    list[0] = 10; //list[0]�� 10 ����
    list[1] = 11; //list[1]�� 11 ����

    plist[0] = (int*)malloc(sizeof(int)); //plist�� �����Ҵ�

    printf("[----- [������] [2020039104] -----]\n");

    printf("list[0] \t= %d\n", list[0]); //list[0] �� ���
    printf("list \t\t= %p\n", list); //list �ּ� �� ���
    printf("&list[0] \t= %p\n", &list[0]); //&list[0] �ּ� �� ���

    printf("list + 0 \t= %p\n", list+0); //list+0 �ּ� �� ���
    printf("list + 1 \t= %p\n", list+1); //list+1 �ּ� �� ���
    printf("list + 2 \t= %p\n", list+2); //list+2 �ּ� �� ���
    printf("list + 3 \t= %p\n", list+3); //list+3 �ּ� �� ���

    printf("list + 4 \t= %p\n", list+4); //list+4 �ּ� �� ���
    printf("&list[4] \t= %p\n", &list[4]); //&list[4] �ּ� �� ���

    free(plist[0]); //�����Ҵ� ����
}