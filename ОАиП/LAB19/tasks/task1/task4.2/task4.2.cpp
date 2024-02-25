#include <iostream>
#include <cstdarg>

using namespace std;

int mn(int count, ...)
{
    va_list args;
    va_start(args, count);

    int min_val = INT_MAX;

    for (int i = 0; i < count; ++i)
    {
        int num = va_arg(args, int);
        if (num < min_val)
        {
            min_val = num;
        }
    }

    va_end(args);
    return min_val;
}

int main(){
    setlocale(LC_ALL, "RU");
    
    int min1 = mn(3, 5, 2, 7);
    int min2 = mn(4, 10, 15, 8, 3);
    int min3 = mn(2, 1, 9);

    cout << "Минимальное значение 1: " << min1 << endl;
    
    cout << "Минимальное значение 2: " << min2 << endl;
    
    cout << "Минимальное значение 3: " << min3 << endl;
}