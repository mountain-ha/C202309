#include <stdio.h>

int main() {
	int i = 0; 
	do {
		i = i + 1;
		if (i % 2 == 0) { // i�� ¦���� �ٽ� ó�� �κ����� ����
			continue;
		}
		printf("%d Hello World\n", i); //i�� Ȧ���� "hello world", i ���
	} while (i < 10); //10�� �ݺ�
	return 0;
}