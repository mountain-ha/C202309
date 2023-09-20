#include <stdio.h>

int main() {
	int num ; //변수 생성
	printf("숫자를 입력하시오:");
	scanf_s("%d", &num); //변수에 정수 입력받기

	if (num == 0) { //num=0일때
		printf("zero");
	}
	else if (num == 1) { //num=1일때
		printf("one");
	}
	else if (num == 2) { //num=2일때
		printf("two");
	}
	else {                  //num이 0,1,2가 아닐때
		printf("not 0 ~ 2");

	}
}