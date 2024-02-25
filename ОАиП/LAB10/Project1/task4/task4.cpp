#include <stdio.h>
int main() {
	
	const int size1 = 5;
	const int size2 = 7;
	int masA[size1], masB[size2], masC[size1+size2];
	int k = 0, j = 0, i = 0;
	
	printf("A:\n");
	
	for (int n = 0; n < size1; n++)
		scanf_s("%d", &masA[n]);
	
	printf("B:\n");
	
	for (int n = 0; n < size2; n++)
		scanf_s("%d", &masB[n]);
	do
	{
		if (masA[k] <= masB[j])
			masC[i++] = masA[k++];
		else
			masC[i++] = masB[k++];

		if (k == size1)
			for (j; j < size2; j++)
				masC[i++] = masB[j];
		if (j == size2)
			for (k; k < size1; k++)
				masC[i++] = masA[k];
	} 
	while (i < size1 + size2);
	
	printf("\n");
	
	for (i = 0; i < size1 + size2; i++)
		printf("%d ", masC[i]);
	printf("\n");
}
