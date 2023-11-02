#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);

	int i = floor;

	while (i > 0) { //아래의 과정을 floor번 만큼 반복
		i--;
		int j = 0;

		while (j < floor - 1 - i) {
			printf("S"); //s를 floor-i 번 출력
			j++;
		}

		int k = 0;

		while (k < 2 * i + 1) {
			printf("*"); //*을 2*i-1번 출력
			k++;
		}

		printf("\n");

	}
	return 0;
}