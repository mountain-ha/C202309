#include <stdio.h>

int main() {
	int choice; //���� ����
	printf("1. ��������\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice); //������ ���� �Է¹ޱ�

	if (choice == 1) { 
		printf("������ �����մϴ�.");
	}
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.");
	}else if (choice == 3) {
		printf("�����մϴ�.");
	}
	else {                  //choice�� 1,2,3�� �ƴҶ�
		printf("�߸� �Է��ϼ̽��ϴ�.");

	}
}

