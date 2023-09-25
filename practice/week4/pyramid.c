#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) { //아래의 과정을 floor번 만큼 반복

		for (int j = 0; j < floor - 1 - i; j++) {
			printf("S"); //s를 floor-1-i 번 출력
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*"); //*을 2*i+1번 출력
		}

		printf("\n"); 

	}
	return 0;
}