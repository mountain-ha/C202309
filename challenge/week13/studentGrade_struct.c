#include <stdio.h>
#include <string.h> 

#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

typedef struct {
    char name[CHARNUM];
    double scores[SUBJECTS];
} Student; // 구조체 정의

int pointStudentResults(Student students[STUDENTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        double sum = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            sum += students[i].scores[j];
        }
        double student_average = sum / SUBJECTS;
        printf("%s의 평균 점수: %.2f\n", students[i].name, student_average);
    }
    return 0;
}

int pointSubjectResults(Student students[STUDENTS], char subjectNames[][CHARNUM]) {
    for (int i = 0; i < SUBJECTS; i++) {
        double sum = 0;
        for (int j = 0; j < STUDENTS; j++) {
            sum += students[j].scores[i];
        }
        double subject_average = sum / STUDENTS;
        printf("%s의 평균 점수: %.2f 입니다.\n", subjectNames[i], subject_average);
    }
    return 0;
}

int main() {
    char subjectNames[SUBJECTS][CHARNUM] = { "퀴즈", "중간고사", "기말고사" };
    Student students[STUDENTS]; // 구조체 배열 선언

    printf("학생 %d명의 이름과 성적 입력을 시작합니다.\n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d번 째 학생의 이름을 입력하세요:", i + 1);
        scanf_s("%s", students[i].name, (int)sizeof(students[i].name));

        printf("%s의 성적(띄어쓰기 구분): ", students[i].name);
        for (int j = 0; j < SUBJECTS; j++) {
            scanf_s("%lf", &students[i].scores[j]);
        }
    }

    printf("학생들의 시험 점수가 모두 입력 되었습니다.\n");
    printf("--------------------\n");
    printf("학생 별 성적은 다음과 같습니다 \n");

    pointStudentResults(students);

    printf("--------------------\n");
    printf("과목 별 성적은 다음과 같습니다 \n");
    pointSubjectResults(students, subjectNames);
    printf("프로그램을 종료합니다.");

    return 0;
}
