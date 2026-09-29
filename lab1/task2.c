#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void task2(int a[], int n)
{
    printf("Массив: ");
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    putchar('\n');
}
