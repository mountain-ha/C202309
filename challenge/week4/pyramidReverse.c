#include <stdio.h>

int main()
{
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf_s("%d", &floor);

	int i = floor;

	while (i > 0) { //�Ʒ��� ������ floor�� ��ŭ �ݺ�
		i--;
		int j = 0;

		while (j < floor - 1 - i) {
			printf("S"); //s�� floor-i �� ���
			j++;
		}

		int k = 0;

		while (k < 2 * i + 1) {
			printf("*"); //*�� 2*i-1�� ���
			k++;
		}

		printf("\n");

	}
	return 0;
}