#include <stdio.h>

int main() {
	int choice; //변수 생성
	printf("1. 파일저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice); //변수에 정수 입력받기

	if (choice == 1) { 
		printf("파일을 저장합니다.");
	}
	else if (choice == 2) {
		printf("저장 없이 닫습니다.");
	}else if (choice == 3) {
		printf("종료합니다.");
	}
	else {                  //choice가 1,2,3이 아닐때
		printf("잘못 입력하셨습니다.");

	}
}

