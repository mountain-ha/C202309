#include <stdio.h>

long multiF(int value); //multiF �Լ��� ����� ����

void main()
{
	printf("1���� 2������ ���� %d\n", multiF(2));
	printf("1���� 3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));

}

long multiF(int value)    //multiF�Լ� ����
{
	int i;
	int multi = 1;
	for (i = 1; i <= value; i = i + 1) // 1���� value������ ���� ���ϴ� �ݺ���
	{
		multi = multi * i;
	}

	return multi; //��� ��ȯ
}