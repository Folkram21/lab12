#include <stdio.h>

int main() {
	char *c;
	int *i;
	double *d;

	printf("Memory\n");
	printf("char - %d\n", sizeof(c));
	printf("int - %d\n", sizeof(i));
	printf("double - %d\n", sizeof(d));

	return 0;
}
