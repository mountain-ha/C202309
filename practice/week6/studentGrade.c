#include <stdio.h>
#define STUDENTS 5
void classifyStudents(int scores[], char targetGrade) { //�л����� ������ �ű�� �Լ� ����
	printf("�л� ���� �з�\n");
	char grade = ' ';
		for (int i = 0; i < STUDENTS; i++) {
			if (scores[i] >= 90) {
				grade = 'A';
			}
			else if (scores[i] >= 80) {
				grade = 'B'; 
			}
			else if (scores[i] >= 70) {
				grade = 'C';
			}
			else if (scores[i] >= 60) {
				grade='D';
			}
			else {
				grade = 'F';
			}
			if (targetGrade == grade) {
				printf("%d�л��� %c������ �޾ҽ��ϴ�.", i+1, targetGrade);
				}
			}
		}


int main() {
	int scores[STUDENTS];
	for (int i = 0; i < STUDENTS; i++) {
		printf("%d�л��� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]); //�л����� ���� �Է¹ޱ�
	}
	char ch = getchar(); //���� �ӽ����� ����

	char target;
	printf("Ư�� ���� (A,B,C,D,F)�� �Է��Ͻÿ�"); //Ư������ �Է¹ޱ�
	scanf_s("%c", &target, 1);
	classifyStudents(scores, target); //Ư�� ������ ���� �л� ���

	return 0;
}