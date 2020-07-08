#include <stdio.h>

int main()
{
	char ans;
	
	printf("당신은 10대 소녀입니까?\n");
	printf("맞다면 Y를, 아니라면 N을 입력하세요\n");
	
	ans = getchar();
	
	if(ans == 'y' || ans == 'Y')
	{
		printf("당신은10대 소녀입니다.\n");
	}
	else if(ans == 'n' || ans == 'N')
	{
		printf("당신은 10대 소녀가 아닙니다.\n");
	}
	else
	{
		printf("잘못 입력하셨습니다\n");
	}
}
