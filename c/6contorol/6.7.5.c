#include <stdio.h>

int main(){
	int a=1;

	do{

	if(a%2==0) printf("%d",a);
	a++;
	}while(a<=10);

	printf("program end.\n");

	return 0;
}
