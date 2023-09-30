#include <stdio.h>

int main() {
	int i = 0;
	do {
		i = i + 1;
		if (i % 2 == 0) {
			continue;
		}
		printf("%d Hello World\n", i);
	} while (i < 10);
	return 0;
}