#include <stdio.h>

long multiF(int value); //multiF 함수를 사용할 것임

void main()
{
	printf("1부터 2까지의 곱은 %d\n", multiF(2));
	printf("1부터 3까지의 곱은 %d\n", multiF(3));
	printf("1부터 5까지의 곱은 %d\n", multiF(5));

}

long multiF(int value)    //multiF함수 정의
{
	int i;
	int multi = 1;
	for (i = 1; i <= value; i = i + 1) // 1부터 value까지의 수를 곱하는 반복문
	{
		multi = multi * i;
	}

	return multi; //결과 반환
}