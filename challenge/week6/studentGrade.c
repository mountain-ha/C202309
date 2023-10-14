#include <stdio.h>
#define STUDENTS 5
void classifyStudents(int scores[], char targetGrade) { //학생들의 성적을 매기는 함수 생성
	printf("학생 성적 분류\n");
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
			printf("%d학생은 %c점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}

int sum = 0; //전역변수
int num = 0;

int sumScores(int scores[]) { //성적을 더하는 함수
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
		num += 1;
	}
	printf("학생들의 점수의 총합은 %d,",sum);
}
double averageScores(int scores[]) { //성적 평군
	double average = (double)sum / (double)num;
	printf("평균값은 %3lf입니다,", average);
}

void printRanks(int scores[]) { //성적 순위
	int rank[5] = {1,1,1,1,1};
	for (int i = 0; i < STUDENTS; i++) {
		for (int j = 1; j < STUDENTS; j++) {
			if (scores[i] < scores[j]){
				rank[i] += 1;
			}
		}
		printf("%d번 학생의 순위는 %d입니다", i + 1, rank[i]);
	}
}
	int main() {
		int scores[STUDENTS];
		for (int i = 0; i < STUDENTS; i++) {
			printf("%d학생의 성적을 입력하세요: ", i + 1);
			scanf_s("%d", &scores[i]); //학생들의 성적 입력받기
		}
		char ch = getchar(); //버퍼 임시저장 변수

		char target;
		printf("특정 점수 (A,B,C,D,F)를 입력하시오"); //특정점수 입력받기
		scanf_s("%c", &target, 1);
		classifyStudents(scores, target); //특정 점수를 받은 학생 출력
		sumScores(scores);
		averageScores(scores);
		printRanks(scores);
		return 0;
	}