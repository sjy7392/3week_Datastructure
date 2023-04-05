#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; //크기 5인 배열 선언
    int *plist[5] = {NULL,}; //크기 5인 포인터 배열 선언 후 초기화
    
    plist[0] = (int *)malloc(sizeof(int));  //plist에 동적할당
    list[0] = 1; //list[0]에 1 대입
    list[1] = 100; //list[1]에 100 대입
    *plist[0] = 200; //*plist[0]에 200 대입

    printf("[----- [손지연] [2020039104] -----]\n");

    printf("list[0] = %d\n", list[0]); //list 0번째 값 출력
    printf("&list[0] = %p\n", &list[0]); //list 0번째 주소 값 출력
    printf("list = %p\n", list); //list의 주소 값 출력
    printf("&list = %p\n", &list); //&list 주소 값 출력

    printf("----------------------------------------\n\n");

    printf("list[1] = %d\n", list[1]); //list의 1번째 값 출력
    printf("&list[1] = %p\n", &list[1]); //list 1번째 값의 주소 값 출력
    printf("*(list+1) = %d\n", *(list + 1)); //*(list+1) 값 출력
    printf("list+1 = %p\n", list+1); //list+1 포인터 주소 형태로 출력

    printf("----------------------------------------\n\n");

    printf("*plist[0] = %d\n", *plist[0]); //*plist[0] 값 출력
    printf("&plist[0] = %p\n", &plist[0]); //&plist[0] 주소 값 출력

    printf("&plist = %p\n", &plist); //&plist 주소 값 출력
    printf("plist = %p\n", plist); //plist 주소 값 출력

    printf("plist[0] = %p\n", plist[0]); //plist[0] 주소 값 출력
    printf("plist[1] = %p\n", plist[1]); //plist[1] 주소 값 출력
    printf("plist[2] = %p\n", plist[2]); //plist[2] 주소 값 출력
    printf("plist[3] = %p\n", plist[3]); //plist[3] 주소 값 출력
    printf("plist[4] = %p\n", plist[4]); //plist[4] 주소 값 출력

    free(plist[0]); //동적할당 해제
}