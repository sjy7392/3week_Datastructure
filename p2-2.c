#include <stdio.h>

void print_one(int *ptr, int rows); //print_one 함수 선언

int main()
{
    printf("[----- [손지연] [2020039104] -----]\n");

    int one[] = {0, 1, 2, 3, 4}; // 배열 one에 값 초기화
    printf("one = %p\n", one); //one 포인터 주소 형태로 출력
    printf("&one = %p\n", &one); //&one 포인터 주소 형태로 출력
    printf("&one[0] = %p\n", &one[0]); //&one[0] 포인터 주소 형태로 출력
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n"); 
    printf("------------------------------------\n");

    print_one(&one[0], 5); //one[0]의 주소와 5를 print_one 함수로 전달
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); 
    printf("------------------------------------\n");
    print_one(one, 5); //one과 5를 print_one 함수로 전달

    return 0;
}

void print_one(int *ptr, int rows) //매개변수로 int 포인터 변수, int 변수를 가지며 해당 변수로 값 전달 받음
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) //0부터 rows-1번 반복
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr +1과 *(ptr+1)을 포인터 주소형, 5자리 정수형으로 출력
    printf("\n");
}