#include <iostream>
#include <cmath>

using namespace std;

double equation1(double x) {
    return pow(x, 3) + 3 * x - 1;
}

double equation2(double x) {
    return exp(x) - 4;
}

double bisectionMethod(double (*equation)(double), double a, double b, double epsilon) {
    if (equation(a) * equation(b) >= 0) {
        cout << "Неверно выбраны начальные точки a и b " << endl;
        return NAN;
    }

    double c;

    while ((b - a) >= epsilon) {
        c = (a + b) / 2;

        if (equation(c) == 0.0)
            break;
        else if (equation(c) * equation(a) < 0)
            b = c;
        else
            a = c;
    }

    return c;
}

int main() {
    setlocale(LC_ALL, "RU");

    double epsilon = 0.001;
    double a1 = -2.0, b1 = 2.0;
    double a2 = -2.0, b2 = 2.0;

    double root1 = bisectionMethod(equation1, a1, b1, epsilon);
    if (!isnan(root1))
        cout << "Корень уравнения 1: " << root1 << endl;
    else
        cout << "Не удалось найти корень для уравнения 1 " << endl;

    double root2 = bisectionMethod(equation2, a2, b2, epsilon);
    if (!isnan(root2))
        cout << "Корень уравнения 2: " << root2 << endl;
    else
        cout << "Не удалось найти корень для уравнения 2" << endl;
}