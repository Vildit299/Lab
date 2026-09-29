#include <stdio.h>
#include "tasks.h"

void task1(const int a[], int n)
{
    int min = a[0];
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }

    printf("Максимальный элемент: %d\n", max);
    printf("Минимальный элемент: %d\n", min);
    printf("Разница: %d\n", max - min);
}
