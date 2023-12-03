#include <stdio.h>
#include <string.h> 

#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

typedef struct {
    char name[CHARNUM];
    double scores[SUBJECTS];
} Student; // ����ü ����

int pointStudentResults(Student students[STUDENTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        double sum = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            sum += students[i].scores[j];
        }
        double student_average = sum / SUBJECTS;
        printf("%s�� ��� ����: %.2f\n", students[i].name, student_average);
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
        printf("%s�� ��� ����: %.2f �Դϴ�.\n", subjectNames[i], subject_average);
    }
    return 0;
}

int main() {
    char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
    Student students[STUDENTS]; // ����ü �迭 ����

    printf("�л� %d���� �̸��� ���� �Է��� �����մϴ�.\n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d�� ° �л��� �̸��� �Է��ϼ���:", i + 1);
        scanf_s("%s", students[i].name, (int)sizeof(students[i].name));

        printf("%s�� ����(���� ����): ", students[i].name);
        for (int j = 0; j < SUBJECTS; j++) {
            scanf_s("%lf", &students[i].scores[j]);
        }
    }

    printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
    printf("--------------------\n");
    printf("�л� �� ������ ������ �����ϴ� \n");

    pointStudentResults(students);

    printf("--------------------\n");
    printf("���� �� ������ ������ �����ϴ� \n");
    pointSubjectResults(students, subjectNames);
    printf("���α׷��� �����մϴ�.");

    return 0;
}
