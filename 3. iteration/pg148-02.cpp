#include <stdio.h>

int main()
{
	char ch = '\0';

	for(ch='A'; ch<='Z'; ch++)
	{
		printf("%6c:%6d\n", ch, ch);
	}
	
	return 0;
}
