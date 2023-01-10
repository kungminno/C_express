#include <stdio.h>

struct student {
    char name[20];
    int id;
    float grade;
};

struct student list[] = { {"홍길동",20180001,4.2},{"김철수",20180002,3.2},{"김영희",20180003,4.1}};
int main()
{
    struct student sup_student;
    int i, size;

    size = sizeof(list) / sizeof(list[0]);

    sup_student = list[0];
    for (i = 0; i < size; i++) {
        if (sup_student.grade < list[i].grade)
            sup_student = list[i];
        else
            sup_student = sup_student;
    }

    printf("평점이 가장 높은 학생은 (이름: %s, 학번 %d, 평점: %f)입니다.", sup_student.name, sup_student.id, sup_student.grade);

    return 0;
}

