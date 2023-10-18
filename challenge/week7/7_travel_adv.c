#include <stdio.h>
#define NUMCITY 3 //여행지 3곳 상수
#define NUMPEOPLE 2 //사람 2명 상수

char names[NUMPEOPLE][10]; //이름 배열
char cities[NUMCITY][10]; //도시 배열

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
	printf("평균일 기준으로 가장 인기있었던 도시는 %s 입니다. (평균머문일: %.2f)\n", cities[maxDaylndex], maxDay);
}
int main() {

	printf("%d개의 도시명을 차례대로 입력해주세요 \n", NUMCITY); //도시명 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE); //여행지 이름 입력받기
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
			printf("도시 %s에서 사람 %s가 보낸 일수를 입력하세요", cities[i], names[j]); //사람과 일수 입력받기
			scanf_s("%d", &travelDays[i][j]);
		
		}
		

	}
	double averageDays[NUMCITY];
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = getSum(travelDays[i], NUMPEOPLE);
		
		double averageDay =getAverage(travelDays[i], NUMPEOPLE);
		printf("도시 %s에서 보낸 총 일수 : %d, 평균 일수 : %.2f\n", cities[i], totalDays, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays, NUMCITY);
}

