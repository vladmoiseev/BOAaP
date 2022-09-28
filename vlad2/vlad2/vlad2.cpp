#include <stdio.h>
int main()
{
	int a, b, c;
	printf("input a = ");
	scanf_s("%d", &a);
	printf("input b = ");
	scanf_s("%d", &b);
	printf("input c = ");
	scanf_s("%d", &c);

	if (a >= b && a >= c)

		printf("%d", a);

	else if (b >= a && b >= c)

		printf("%d", b);

	else if (c >= a && c >= b)
	
		printf("%d", c);

		return 0;
}