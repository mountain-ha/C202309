#include <stdio.h>

int main()
{
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5~100)");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) { //�Ʒ��� ������ floor�� ��ŭ �ݺ�

		for (int j = 0; j < floor - 1 - i; j++) {
			printf("S"); //s�� floor-1-i �� ���
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*"); //*�� 2*i+1�� ���
		}

		printf("\n"); 

	}
	return 0;
}