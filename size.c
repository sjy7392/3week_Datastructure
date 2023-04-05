#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x; //이중 포인터 변수 x 선언
    printf("[----- [손지연] [2020039104] -----]\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); //x 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x 크기 출력
}