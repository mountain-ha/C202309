#include <stdio.h>

long multiF(int value); //multiF �Լ��� ����� ����

int main()
{
	printf("1���� 2������ ���� %ld\n", multiF(2));
	printf("1���� 3������ ���� %ld\n", multiF(3));
	printf("1���� 5������ ���� %ld\n", multiF(5));

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