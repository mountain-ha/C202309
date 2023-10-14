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
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d�л��� %c������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}

int sum = 0; //��������
int num = 0;

int sumScores(int scores[]) { //������ ���ϴ� �Լ�
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
		num += 1;
	}
	printf("�л����� ������ ������ %d,",sum);
}
double averageScores(int scores[]) { //���� ��
	double average = (double)sum / (double)num;
	printf("��հ��� %3lf�Դϴ�,", average);
}

void printRanks(int scores[]) { //���� ����
	int rank[5] = {1,1,1,1,1};
	for (int i = 0; i < STUDENTS; i++) {
		for (int j = 1; j < STUDENTS; j++) {
			if (scores[i] < scores[j]){
				rank[i] += 1;
			}
		}
		printf("%d�� �л��� ������ %d�Դϴ�", i + 1, rank[i]);
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
		sumScores(scores);
		averageScores(scores);
		printRanks(scores);
		return 0;
	}