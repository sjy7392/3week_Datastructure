#include <stdio.h>
#define MAX_SIZE 100 //�ִ�ũ�� ��ũ�� ����

float sum1(float list[], int); //sum1�Լ� ����
float sum2(float *list, int); //sum2�Լ� ����
float sum3(int n, float *list); //sum3�Լ� ����
float input[MAX_SIZE], answer; //ũ�Ⱑ MAX_SIZE�� input �迭�� answer ����(��������)
int i; //int�� i ����(��������)

void main(void)
{
    for(i=0; i < MAX_SIZE; i++) //MAZ_SIZE��ŭ �迭�� �� ����
        input[i] = i;

    /* for checking call by reference */
    printf("[----- [������] [2020039104] -----]\n");

    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input ������ �ּ� ���·� ���

    answer = sum1(input, MAX_SIZE); //answer �� sum1�Լ��� ���ϰ� ����
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum2(input, MAX_SIZE); //answer �� sum2�Լ��� ���ϰ� ����
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    
    answer = sum3(MAX_SIZE, input); //answer �� sum3�Լ��� ���ϰ� ����
    printf("The sum is: %f\n\n", answer);
}

float sum1(float list[], int n) { //�Ű����� ���ڷ� �迭�� ������ ����
    printf("list\t=%p\n", list); //list�� ������ �ּ� ���·� ���
    printf("&list\t=%p\n\n", &list); //&list�� ������ �ּ� ���·� ���

    int i; //������ ���� i ����(��������)
    float tempsum=0; //�Ǽ��� ���� tempsum �����ϸ� 0���� �ʱ�ȭ(��������)
    for(i=0; i<n; i++) //i�� 0���� n-1���� �ݺ�
        tempsum+=list[i]; //tempsum�� list[i]���� ����
    return tempsum; //tempsum �� ����
}

float sum2(float *list, int n){ //�Ű����� ���ڷ� �迭�� ������ ����
    printf("list \t = %p\n", list); //list�� ������ �ּ� ���·� ���
    printf("&list \t=%p\n\n", &list); //&list�� ������ �ּ� ���·� ���

    int i; //������ ���� i ����(��������)
    float tempsum=0; //�Ǽ��� ���� tempsum �����ϸ� 0���� �ʱ�ȭ(��������)
    for(i =0; i<n; i++) //i�� 0���� n-1���� �ݺ�
        tempsum+=*(list+i); //tempsum�� list[i]���� ����
    return tempsum; //tempsum �� ����
}

/* stack variable reuse test */
float sum3(int n, float *list) { //�Ű����� ���ڷ� �迭�� ������ ����
    printf("list\t= %p\n", list); //list�� ������ �ּ� ���·� ���
    printf("&list\t= %p\n\n", &list); //&list�� ������ �ּ� ���·� ���

    int i; //������ ���� i ����(��������)
    float tempsum = 0; //�Ǽ��� ���� tempsum �����ϸ� 0���� �ʱ�ȭ(��������)
    for(i = 0; i < n; i++) //i�� 0���� n-1���� �ݺ�
        tempsum += *(list + i); //tempsum�� list[i]���� ����
    return tempsum; //tempsum �� ����
}