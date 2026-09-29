#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

int *task3(int *n)
{
    int *a;

    printf("Введите размер массива: ");
    if (scanf("%d", n) != 1 || *n <= 0) {
        puts("Размер должен быть положительным числом.");
        return NULL;
    }

    a = malloc((size_t)*n * sizeof *a);
    if (a == NULL)
        puts("Не удалось выделить память.");

    return a;
}
