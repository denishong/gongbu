#include <stdio.h>

int main()
{
	int num1 = 0;
	while(1)
	{
		num1++;

		printf("Hello, world! %d\n", num1);

		if(num1 == 100)
			break;
	}

	return 0;
}