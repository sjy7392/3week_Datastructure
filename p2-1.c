#include <stdio.h>
#define MAX_SIZE 100 //최대크기 매크로 지정

float sum1(float list[], int); //sum1함수 선언
float sum2(float *list, int); //sum2함수 선언
float sum3(int n, float *list); //sum3함수 선언
float input[MAX_SIZE], answer; //크기가 MAX_SIZE인 input 배열과 answer 선언(전역변수)
int i; //int형 i 선언(전역변수)

void main(void)
{
    for(i=0; i < MAX_SIZE; i++) //MAZ_SIZE만큼 배열에 값 대입
        input[i] = i;

    /* for checking call by reference */
    printf("[----- [손지연] [2020039104] -----]\n");

    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //input 포인터 주소 형태로 출력

    answer = sum1(input, MAX_SIZE); //answer 에 sum1함수의 리턴값 지정
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);

    answer = sum2(input, MAX_SIZE); //answer 에 sum2함수의 리턴값 지정
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    
    answer = sum3(MAX_SIZE, input); //answer 에 sum3함수의 리턴값 지정
    printf("The sum is: %f\n\n", answer);
}

float sum1(float list[], int n) { //매개변수 인자로 배열과 정수를 받음
    printf("list\t=%p\n", list); //list를 포인터 주소 형태로 출력
    printf("&list\t=%p\n\n", &list); //&list를 포인터 주소 형태로 출력

    int i; //정수형 변수 i 선언(지역변수)
    float tempsum=0; //실수형 변수 tempsum 선언하며 0으로 초기화(지역변수)
    for(i=0; i<n; i++) //i는 0부터 n-1까지 반복
        tempsum+=list[i]; //tempsum에 list[i]값을 더함
    return tempsum; //tempsum 값 리턴
}

float sum2(float *list, int n){ //매개변수 인자로 배열과 정수를 받음
    printf("list \t = %p\n", list); //list를 포인터 주소 형태로 출력
    printf("&list \t=%p\n\n", &list); //&list를 포인터 주소 형태로 출력

    int i; //정수형 변수 i 선언(지역변수)
    float tempsum=0; //실수형 변수 tempsum 선언하며 0으로 초기화(지역변수)
    for(i =0; i<n; i++) //i는 0부터 n-1까지 반복
        tempsum+=*(list+i); //tempsum에 list[i]값을 더함
    return tempsum; //tempsum 값 리턴
}

/* stack variable reuse test */
float sum3(int n, float *list) { //매개변수 인자로 배열과 정수를 받음
    printf("list\t= %p\n", list); //list를 포인터 주소 형태로 출력
    printf("&list\t= %p\n\n", &list); //&list를 포인터 주소 형태로 출력

    int i; //정수형 변수 i 선언(지역변수)
    float tempsum = 0; //실수형 변수 tempsum 선언하며 0으로 초기화(지역변수)
    for(i = 0; i < n; i++) //i는 0부터 n-1까지 반복
        tempsum += *(list + i); //tempsum에 list[i]값을 더함
    return tempsum; //tempsum 값 리턴
}