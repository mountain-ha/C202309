#include <stdio.h>

int hapf(int value); 

void main() //1부터 10, 100, 1000까지의 합 출력 
{
	printf("1부터   10까지의 합은 %d\n", hapf(10)); 
	printf("1부터  100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));

}

int hapf(int value) //hapf함수 정의
{
	int i = 1;
	int hap = 0;
	while(i<=value) //1부터 value까지를 더하는 반복문
	{
		hap = hap + i;
		i++;
	}

	return hap; //함수의 결과 반환
}