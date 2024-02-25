#include <stdio.h>
#include <stdlib.h>

using namespace std;

void main()
{
	int* ptr, i, n;
	
	printf("Input size of massiv, n<30 \n");
	scanf_s("%d", &n);

	if (!(ptr = (int*)malloc(n * sizeof(int))))
	{	                                      
		puts("Not enough memory");
		return;
	}
	
	for (i = 0; i < n; i++)
	{
		printf("Input element [%d]\n", i + 1);
		scanf_s("%d", ptr + i);
	}
	int maxElement = *ptr;

	for (i = 0; i < n; i++)
	{
		if (abs(maxElement) < abs(*(ptr + i)))
			maxElement = *(ptr + i);
	}
	
	printf_s("\nMassiv: \n", i + 1);
	
	for (i = 0; i < n; i++)
		printf("%d ", *(ptr + i));

	printf_s("\nMax Element: %d", maxElement);

	free(ptr);
}
