#include <stdio.h>

int main(void)
{
	int result;
	int num1,num2;

	printf("정수 one: \n");
	scanf("%d",&num1);
	printf("정수 two: \n");
	scanf("%d",&num2);

	result = num1 +num2;
	printf("%d + %d =%d \n", num1,num2,result);

	return 0;
}
