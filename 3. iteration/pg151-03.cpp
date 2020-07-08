#include <stdio.h>

int main()
{
	int times = 0;
	
	printf("횟수를 입력해 주세요 ");
	scanf("%d", &times);
	
	for(int i = 0; i < times ; i++)
	{
		for(int j = 0; j <= i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
