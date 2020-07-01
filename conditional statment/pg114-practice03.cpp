#include <stdio.h>

int main() {
	int a;
	
	printf("점수를 입력하세요.");
	// 정수의 입력을 받아서 변수 a 에 저장하기 
	scanf("%d", &a);
	// 90점 이상은 A반, 85점 이상은 B반 그렇지 않으면 C반 그리고 80점 미만이면 불합격
	// 80점 이상인 경우
	if(a >= 80)
	{	
		// 90점 이상인 경우
		if(a >= 90)
		{
			printf("%d 점은 A반입니다.\n", a);
		}
		// 90점 이상이 아니고, 85점 이상인 경우
		else if(a >= 85)
		{
			printf("%d 점은 B반입니다.\n", a);
		}
		// 90점 이상, 85점 이상 둘다 아닌경우
		else
		{
			printf("%d 점은 c반입니다.\n", a)
		}
	}
	// 80점 미만인 경우
	else
	{
		printf("%d 점은 불합격 입니다.\n", a);
	}

	return 0;
}
