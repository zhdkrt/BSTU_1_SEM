#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return cos(x) + x - 7;
}

void graphicallySolve() {
    double a = -10;
    double b = 10;
    double e = 0.1;
    double x1 = a;
    double x2 = a + e;

    while (x2 <= b) {
        if (f(x1) * f(x2) < 0) {
            cout << "Корень на промежутке [" << x1 << ", " << x2 << "]" << endl;
        }

        x1 = x2;
        x2 += e;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    graphicallySolve();

}