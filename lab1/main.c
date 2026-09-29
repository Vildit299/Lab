#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#endif

#include "tasks.h"

int main(void)
{
    int n;
    int *a;

#ifdef _WIN32
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif

    srand((unsigned)time(NULL));

    puts("=== Задания 1, 2, 3 ===");
    a = task3(&n);
    if (a == NULL)
        return 1;

    task2(a, n);
    task1(a, n);
    free(a);

    puts("\n=== Задание 4 ===");
    task4();

    puts("\n=== Задание 5 ===");
    task5();

    return 0;
}
