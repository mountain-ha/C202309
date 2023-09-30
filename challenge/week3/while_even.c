#include <stdio.h>

int main() {
	int i = 0; 
	while (i < 10) { //i가 10보다 작으면 반복
		i = i + 1; //증감식
		if (i % 2 == 0) {
			continue; //i가 짝수이면 다시 while 부분으로 돌아감
		}
		printf("%d Hello World\n",i );
	}  
	return 0;
}
