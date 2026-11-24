#include <stdio.h>

void main(void)
{
    int size;
    double x = 0x1234567887654321;//переменная инициализированная значением 0x12345678
    double* prt; //указатель для исследуемой переменной
    unsigned char* a; //указатель на байт

    prt = &x;//получение адреса переменной
    a = (unsigned char*)prt;//преобразование типа для получения указателя на один байт

    size = sizeof(x);

    for (int i = 0; i < size; i++) {
        printf("\n%d byte - %x", i + 1, *(a + (size - (i + 1))));
    }
}

/* В текущеё системе байты хранятся с младшеuо байта (little-end) */