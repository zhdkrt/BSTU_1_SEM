#include <iostream>
#include <stdlib.h>

int main() {
    int* ptr, i, n;
    int max = 0;

    printf("Input size of massiv, n<30 \n");
    scanf_s("%d", &n);

    if (!(ptr = (int*)malloc(n * sizeof(int))))
    {
        puts("Not enough memory");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Input element [%d]\n", i + 1);
        scanf_s("%d", ptr + i);

        if (abs(*(ptr + i)) > max)
            max = abs(*(ptr + i));
    }

    printf("\nMassiv: [ ");
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("]");

    printf("\nMax element: %d \n", max);

    free(ptr);
}