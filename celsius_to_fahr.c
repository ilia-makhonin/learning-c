#include <stdio.h>


#define LOWER 0
#define UPPER 300
#define STEP 20



int main()
{
	int celsius;
	for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
	{
		printf("%d %6.2f\n", celsius, (celsius * (9.0 / 5.0) + 32.0));
	}
	return 0;
}