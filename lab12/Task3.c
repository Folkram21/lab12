#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_CTYPE, "RUS");

	int* pа, x = 5;

	pа = &x;

	printf("По адресу %p хранится *ptr=%g\n", pа, *pа);

	pа++;

	printf("По адресу %p хранится *ptr=%g\n", pа, *pа);

	pа--;

	printf("По адресу %p хранится *ptr=%g\n", pа, *pа);

	return 0;
}