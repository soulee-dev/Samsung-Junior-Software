#include <stdio.h>

int main()
{
	int count = 0;
	int passwd = 1234, input = 0;
	
	while(1)
	{
		scanf("%d", &input);
		count++;
		if(input == passwd)
		{
			break;
		}
	}
	printf("무한 루프를 %d번 시도 끝에 탈출하였습니다.\n", count);
	
	return 0;
 } 
