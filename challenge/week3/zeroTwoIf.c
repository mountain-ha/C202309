#include <stdio.h>

int main() {
	int num ; //���� ����
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &num); //������ ���� �Է¹ޱ�

	if (num == 0) { //num=0�϶�
		printf("zero");
	}
	else if (num == 1) { //num=1�϶�
		printf("one");
	}
	else if (num == 2) { //num=2�϶�
		printf("two");
	}
	else {                  //num�� 0,1,2�� �ƴҶ�
		printf("not 0 ~ 2");

	}
}