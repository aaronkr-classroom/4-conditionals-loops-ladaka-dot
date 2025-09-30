#include <stdio.h>


int main(void) {

	int result1 = -5;

	if (result1 < 0)
		result1 = result1 * -1;

	printf("%d\n", result1);

	int result2 = -7;

	result2 = result2 > 0 ? result2 : result2 * -1;

	printf("%d\n", result2);

	return 0;
}

