#include <stdio.h>
#define NUMCITY 3 //������ 3�� ���
#define NUMPEOPLE 2 //��� 2�� ���

char names[NUMPEOPLE][10]; //�̸� �迭
char cities[NUMCITY][10]; //���� �迭

void calculateTravelDays();

int main() {

	printf("%d���� ���ø��� ���ʴ�� �Է����ּ��� \n", NUMCITY); //���ø� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE); //������ �̸� �Է¹ޱ�
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	calculateTravelDays();

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �ϼ��� �Է��ϼ���", cities[i], names[j]); //����� �ϼ� �Է¹ޱ�
			scanf_s("%d", &travelDays[i][j]);
		}
	}
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j]; //�� �ϼ� ���
		}
		float averageDays = (float)totalDays / NUMPEOPLE; //����ϼ� ���
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �ϼ� : %.2f\n", cities[i], totalDays, averageDays); 
	}

}
