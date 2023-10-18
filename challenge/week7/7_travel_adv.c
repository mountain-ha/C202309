#include <stdio.h>
#define NUMCITY 3 //������ 3�� ���
#define NUMPEOPLE 2 //��� 2�� ���

char names[NUMPEOPLE][10]; //�̸� �迭
char cities[NUMCITY][10]; //���� �迭

void calculateTravelDays();
int getSum(int numarray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numarray[i];
	}
	return totalDays;
}
double getAverage(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	double averageDays = (double)totalDays / length;
	return averageDays;
}
void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDaylndex = 0;
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[1];
			maxDaylndex = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s �Դϴ�. (��ոӹ���: %.2f)\n", cities[maxDaylndex], maxDay);
}
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
			int totalDay = getSum(travelDays[i],NUMPEOPLE);
			printf("���� %s���� ��� %s�� ���� �ϼ��� �Է��ϼ���", cities[i], names[j]); //����� �ϼ� �Է¹ޱ�
			scanf_s("%d", &travelDays[i][j]);
		
		}
		

	}
	double averageDays[NUMCITY];
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = getSum(travelDays[i], NUMPEOPLE);
		
		double averageDay =getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ� : %d, ��� �ϼ� : %.2f\n", cities[i], totalDays, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays, NUMCITY);
}

