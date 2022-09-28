#include <stdio.h>
int main (int n)
{
	int a = 1, b = 1, c, d, i = 0;
	printf("input any number ");
	scanf_s("%d", &d);

	while (i < 10000)
	{
		c = a + b;
		a = b;
		b = c;

		if (d != a && d != b && d != c)
			i++;
		else {
			printf("true");
			return 0; }
	}
	if (d > c);
		printf("false");
	
	return 0;
}