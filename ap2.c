#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //크기 5인 배열 선언
    int *plist[5]; //크기 5인 포인터 배열 선언

    list[0] = 10; //list[0]에 10 대입
    list[1] = 11; //list[1]에 11 대입

    plist[0] = (int*)malloc(sizeof(int)); //plist에 동적할당

    printf("[----- [손지연] [2020039104] -----]\n");

    printf("list[0] \t= %d\n", list[0]); //list[0] 값 출력
    printf("list \t\t= %p\n", list); //list 주소 값 출력
    printf("&list[0] \t= %p\n", &list[0]); //&list[0] 주소 값 출력

    printf("list + 0 \t= %p\n", list+0); //list+0 주소 값 출력
    printf("list + 1 \t= %p\n", list+1); //list+1 주소 값 출력
    printf("list + 2 \t= %p\n", list+2); //list+2 주소 값 출력
    printf("list + 3 \t= %p\n", list+3); //list+3 주소 값 출력

    printf("list + 4 \t= %p\n", list+4); //list+4 주소 값 출력
    printf("&list[4] \t= %p\n", &list[4]); //&list[4] 주소 값 출력

    free(plist[0]); //동적할당 해제
}