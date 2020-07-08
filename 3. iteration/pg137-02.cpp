#include <stdio.h>

int main()
{
	int input = 0;
	
	while(1)
	{
		printf("제곱하고 싶은 숫자를 입력하세요 :");
		scanf("%d", &input);
		printf("%d 의 제곱은 %d 입니다.\n", input, input * input);
	}
	
	return 0;
}
