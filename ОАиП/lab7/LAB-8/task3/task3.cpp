/*#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int count = 5, n = 1;
	float b, m = 9999;
	for (int i = 0; i < count; i++)
	{
		cout << "Введите b" << i << endl;
		cin >> b;
		if (b < m)
		{
			m = b;
			n = i;
		}
	}
	cout << "m= " << m << endl;
	cout << "n= " << n << endl;
}*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int count = 5;
    float b, m = 9999;
    int n = -1; // Изменено значение по умолчанию для n

    for (int i = 0; i < count; i++)
    {
        cout << "Введите b" << i << ": ";
        cin >> b;

        if (b < m)
        {
            m = b;
            n = i;
        }
    }

    cout << "Минимальное значение: b" << n << " = " << m << "\n";
   
	return 0;
}
