#include <stdio.h>

int main() {
	int i = 0; 
	do {
		i = i + 1;
		if (i % 2 == 0) { // i가 짝수면 다시 처음 부분으로 가기
			continue;
		}
		printf("%d Hello World\n", i); //i가 홀수면 "hello world", i 출력
	} while (i < 10); //10번 반복
	return 0;
}