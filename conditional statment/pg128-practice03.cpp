#include <stdio.h>

int main() 
{
	char in1[10];
	char in2[10];
	
	printf("첫 번째 이름을 입력하세요. : ");
	scanf("%s", in1);
	
	
	printf("두 번째 이름을 입력하세요. : ");
	scanf("%s", in2);
	
	if(in1[0] == in2[0] && in1[1] == in2[1])
	{
		printf("입력하신 %s, %s 두 이름은 동일한 성입니다.\n", in1, in2);
	}
	else
	{
		printf("입력하신 %s, %s 두 이름은 성이 다릅니다.\n", in1, in1);
	}
}
