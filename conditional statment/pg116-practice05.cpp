#include <stdio.h>

int main() {
	float a, b, c;
	
	printf("3개의 실수를 입력하세요. ");
	// 세개의 실수의 입력을 받아 변수 a, b, c에 저장하기
	scanf("%f %f %f", &a, &b, &c);
	// 실수 3개를 입력한 다음, 가장 큰 수를 소수점 넷재짜리에서 반올림해서 출력하기
	// a > b
	if(a > b)
	{
		// a > b,c
		if(a > c)
		{
			printf("가장 큰 수: %.3f\n", a);
		}
		// c > a,b
		else
		{
			printf("가장 큰 수: %.3f\n", c);
		}
	}
	// b > a
	else
	{
		// b > a,c
		if(a > c)
		{
			printf("가장 큰 수: %.3f\n", b);
		}
		// c > a,b
		else
		{
			printf("가장 큰 수: %.3f\n", c);
		}
	}

	return 0;
}
