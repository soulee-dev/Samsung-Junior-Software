#include <stdio.h>

int main() {
	int a, b, c, min;
	
	printf("3개의 수를 입력하시오. ");
	// 세개의 정수의 입력을 받아서 변수 a, b, c 에 저장하기 
	scanf("%d %d %d", &a, &b, &c);
	// 세 숫자중 가장 작은 숫자 출력 하기
	// a > b 인 경우
	if(a > b)
	{
		// a > b > c
		if(b > c)
		{
			// 가장 작은 숫자 c
			min = c;
			printf("가장 작은 숫자 : %d", min);
		}
		// a > c > b 
		else
		{
			// 가장 작은 숫자 b
			min = b;
			printf("가장 작은 숫자 : %d", min);
		}
	}
	// b > a 인 경우
	else
	{
		// b > a > c
		if(a > c)
		{
			min = c;
			printf("가장 작은 숫자 : %d", min);
		}
		// b > c > a
		else
		{
			min = a;
			printf("가장 작은 숫자 : %d", min);
		}
	}

	return 0;
}
