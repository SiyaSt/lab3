#include<stdio.h>


int main()
{
	char str[50];
	printf("Input words:");
	fgets(str, 50, stdin);
	puts(str);
	
	int a;
	printf("Input number:");
	scanf_s("%d", &a);
	printf("%d\n", a);
	return 0;
	
}

