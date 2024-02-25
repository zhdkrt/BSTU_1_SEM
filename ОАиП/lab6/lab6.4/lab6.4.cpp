#include <iostream>
#include <iomanip>

int main()
{
    int n, i, j;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            std::cout << std::setw(5) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}