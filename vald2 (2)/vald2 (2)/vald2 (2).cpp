#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	for (int i = 1000; i < 10000; i++)
	{
		a = i;
		b = a % 10;
		a = a / 10;
		c = a % 10;
		a = a / 10;
		d = a % 10;
		a = a / 10;
		
	
		if (a + b + c + d == 30 && i % 2 == 0 && i % 7 == 0 && i % 11 == 0)
			e = i;

	}
	printf("%d", e );
	return 0;
}