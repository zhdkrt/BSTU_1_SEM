#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	double* pArr;
	int length, i, j, k, max_j = 0, min_k = 0;

	cout << "Введите размер массива: ";
	cin >> length;

	pArr = new double[length];

	cout << "Введите массив: ";
	
	for (i = 0; i < length; i++)
	cin >> pArr[i];
	
	double maxElement = *pArr, minElement = *pArr;

	for (j = 0; j < length; j++)
	{
		if (fabs(maxElement) < fabs(*(pArr + j))) {
			maxElement = *(pArr + j);
				max_j = j;
		}
	}
	
	for (k = 0; k < length; k++)
	{
		if (fabs(minElement) > fabs(*(pArr + k))){
			minElement = *(pArr + k);
			min_k = k;
		}
	}
	
	double sum = 0,comp=1;

	if(min_k > max_j){
	
		for (int m = max_j + 1; m < min_k; m++){
			comp *= *(pArr + m);
			
			if (*(pArr + m) > 0)
			{
				sum += *(pArr + m);
			}
		}
	}
	
	else{
		
		for (int m = min_k + 1; m < max_j; m++){
			comp *= *(pArr + m);

			if (*(pArr + m) > 0)
			{
				sum += *(pArr + m);
			}
		}
	}

	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << comp;

	delete[] pArr;
}