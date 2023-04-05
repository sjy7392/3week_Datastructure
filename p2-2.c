#include <stdio.h>

void print_one(int *ptr, int rows); //print_one �Լ� ����

int main()
{
    printf("[----- [������] [2020039104] -----]\n");

    int one[] = {0, 1, 2, 3, 4}; // �迭 one�� �� �ʱ�ȭ
    printf("one = %p\n", one); //one ������ �ּ� ���·� ���
    printf("&one = %p\n", &one); //&one ������ �ּ� ���·� ���
    printf("&one[0] = %p\n", &one[0]); //&one[0] ������ �ּ� ���·� ���
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); 
    printf("------------------------------------\n");

    print_one(&one[0], 5); //one[0]�� �ּҿ� 5�� print_one �Լ��� ����
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); 
    printf("------------------------------------\n");
    print_one(one, 5); //one�� 5�� print_one �Լ��� ����

    return 0;
}

void print_one(int *ptr, int rows) //�Ű������� int ������ ����, int ������ ������ �ش� ������ �� ���� ����
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) //0���� rows-1�� �ݺ�
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr +1�� *(ptr+1)�� ������ �ּ���, 5�ڸ� ���������� ���
    printf("\n");
}