#include <stdio.h>

struct student1 { //구조체 student1 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct { //구조체 student2 선언
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf("[----- [손지연] [2020039104] -----]\n");

    struct student1 st1 = {'A', 100, 'A'}; //구조체 변수 st1 선언과 동시에 값 초기화

    printf("st1.lastName = %c\n", st1.lastName); //st1의 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1의 studentId 출력
    printf("st1.grade = %c\n", st1.grade); //st1의 grade 출력

    student2 st2 = {'B', 200, 'B'}; //구조체 변수 st2 선언과 동시에 값 초기화

    printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); //st2의 studentId 출력
    printf("st2.grade = %c\n", st2.grade); //st2의 grade 출력

    student2 st3; //구조체 변수 st3 선언

    st3 = st2; //st3에 st2값 대입

    printf("\nst3.lastName = %c\n", st3.lastName); //st3의 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); //st3의 studentId 출력
    printf("st3.grade = %c\n", st3.grade); //st3의 grade 출력
    
    /* equality test */
    if(strcmp(st3.grade, st2.grade) == 0){
        printf("equal\n");
    }
    else {printf("not equal");}
        
    if(st3.studentId == st2.studentId) {
        printf("equal\n");
    }
    else{printf("not equal\n");
    }

    if(strcmp(st3.lastName, st2.lastName) == 0){
        printf("equal\n");
    }
    else {printf("not equal");}

    return 0;
}
