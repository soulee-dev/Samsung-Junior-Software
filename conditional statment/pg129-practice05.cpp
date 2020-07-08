#include <stdio.h>

int main()
{
	int year;
	
	printf("년도를 입력하세요(숫자만 입력) : ");
	scanf("%d", &year);
	
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
		printf("%d년도는 윤년입니다.\n", year);
	else
		printf("%d년도는 윤년이 아닙니다.\n", year);
			
}
