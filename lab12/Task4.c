#include <stdio.h>

int main() {

	float array[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	float* ptr_a;
	int size;

	ptr_a = &array;
	size = sizeof(array) / sizeof(*ptr_a);

	for (int i = 0; i < size; i++) {
		printf("\nmemory[%p] = %f", ptr_a, *ptr_a);
		ptr_a = ptr_a + 2;
	}

	printf("\nФrray variable memory - %p", array);
	printf("\nFirst element memory - %p", &array[0]);
	printf("\nArray memory - %p", &array);

	return 0;
}
