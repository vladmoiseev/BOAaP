#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	for (int i = 1000; i < 2000; i++)
	{
		a = i; // 1234
		b = a % 10; // 4
		a = a / 10; // 123
		c = a % 10; // 3
		a = a / 10; // 12
		d = a % 10; // 2
		a = a / 10; // 1
		e = d * 1000 + c * 100 + b * 10 + a;
		if (e / i == 3 && e % i == 0)
			printf("%d\n", e);
		else if (i % 1999 == 0)
			printf("number not found");
	}	
	return 0;
	// такого числа нет
}