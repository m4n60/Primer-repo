#include <stdio.h>

int main()
{
	
	int p, t, ph, th, c1, c2;
	c1 = 0000;
	c2 = 0000;

	scanf_s("%i", &t);
	scanf_s("%i", &p);

	th = t;
	ph = p;
	printf("%c%c%08X%04i%04i%08X", 66, 77, th, c1, c2, ph);

	return 0;
}
