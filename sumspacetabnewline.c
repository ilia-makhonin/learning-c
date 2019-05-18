#include <stdio.h>

int main()
{
	int c, nl;
	c = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++nl;
		if (c == '\t')
			++nl;
		if (c == '\n')
			++nl;
	}
	printf("%d\n", nl);
	return 0;
}
