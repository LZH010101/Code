#include <stdio.h>

int main()
{
	int a = 15;
	int b = 21;
	int c;
	c = a;
	a = b;
	b = c;
	printf("a = % d, b= % d", a, b);


	return 0;
}