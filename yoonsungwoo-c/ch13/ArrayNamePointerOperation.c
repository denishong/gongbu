#include <stdio.h>

int main(void)
{
	int arr1[3]={1,2,3};
	double arr2[3]={1.1,2.2,3.3};

	printf("%d %g \n", *arr1, *arr2);

	*arr1 +=100;
	*arr2 +=120.5;

	
	printf("%d %g \n", *arr1, *arr2);
	printf("%d %g \n", arr1+1, arr2+1);
	printf("%p %p \n", arr1+1, arr2+1);
	printf("%p %p \n", arr1+2, arr2+2);
	printf("%d %g \n", arr1[0], arr2[0]);
	printf("%d %g \n", arr1[1], arr2[1]);
	printf("%d %g \n", arr1[2], arr2[2]);

	return 0;
}
