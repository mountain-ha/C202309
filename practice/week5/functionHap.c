#include <stdio.h>

int hapf(int value); 

void main() //1���� 10, 100, 1000������ �� ��� 
{
	printf("1����   10������ ���� %d\n", hapf(10)); 
	printf("1����  100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));

}

int hapf(int value) //hapf�Լ� ����
{
	int i = 1;
	int hap = 0;
	while(i<=value) //1���� value������ ���ϴ� �ݺ���
	{
		hap = hap + i;
		i++;
	}

	return hap; //�Լ��� ��� ��ȯ
}