#include <stdio.h>

int main() {

	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	float* ptr_a;

	for (int i = 0; i < 10; i++) {
		printf("\narray[%d] = %f", i, array[i]);
	}

	return 0;
}
