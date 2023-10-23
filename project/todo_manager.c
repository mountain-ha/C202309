#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; //���� ��� ����
	int taskCount = 0; //�� �� ���� ���� ����

	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1;

		//�޴��� ����ϰ� �޴��� �ִ� �� �Է� �ޱ�
		printf("------------------\n"); 
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0;
		int delIndex = -1;
		int changeIndex = -1;
		char ch;


		switch (choice) {

		//�� �� �Է¹ް� �����ϱ�
		case 1: 
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");

			//�Է¹��� �� ���� �� �� ��Ͽ� �߰�
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount])); 
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
			
			// �� �� ���� +1
			taskCount++;
			break;
		
		//�� �� �����ϱ�
		case 2: 
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			
			// �Է��� ��ȣ�� �� ���� �������� ������ "������ ������ϴ�" ��� �� break�� �̵� 
			if (delIndex > taskCount || delIndex <= 0) { 
				printf("���� ������ ������ϴ�.\n");  
			}

			//�Է��� ��ȣ�� �� ���� �����Ҷ� �� �� �����ϱ�
			else { 
				printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);


				//�Է��� �� �� ����
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				//�� ���� �����ϸ鼭 ���� �� �� ��Ͽ� �� ������ �� ���� ��ĭ�� ��ܼ� �޿��
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1;
			}
			break;
		
		//�� �� ��� ���
		case 3:
			printf("�� �� ���\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		
		//���α׷� ���Ḧ ���� terminate = 1�� ����� swich�� ������
		case 4:
			terminate = 1;
			break;
		
		//��ȣ�� �� �� �Է¹ް� �ش� ��ȣ�� �� �� �����ϱ�
		case 5:
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);

			//�Է��� ��ȣ�� �� ���� ������ "���� ������ ������ϴ�"����� break�� �̵�  
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {

				//�� �� ����
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				for (int i = delIndex - 1; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}

				//�ش� ��ġ��  �� �� �Է¹ް� �����ϱ�
				printf("������ �� ���� ������ �Է��ϼ��� (���� ���� �Է��ϼ���): ");
				scanf_s("%s", tasks[delIndex - 1], (int)sizeof(tasks[delIndex - 1]));
				printf("�� �� ""%s""�� �����Ǿ����ϴ�\n\n", tasks[delIndex - 1]);;
				break;

		
		// 1, 2, 3, 4, 5�̿��� ��ȣ �Է½� "�߸��� �����Դϴ�. �ٽ� �����ϼ���"���
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
			}

			//case 4���� terminate = 1�� ������� ���α׷� ����
			if (terminate == 1) {
				printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
				break;
			}

			//�� ���� 10�� �̻��϶� ���α׷� ����
			if (taskCount <= 10) {
				printf("�� ���� �� á���ϴ�");
				break;
			}

		}
	}
}