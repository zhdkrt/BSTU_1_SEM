#include <iostream>

using namespace std;

double function(double x) {
    return pow(cos(x), 3);
}

double calculateFunction() {

    double a, b;
    int n;

    cout << "¬ведите a: ";
    cin >> a;
    cout << "¬ведите b: ";
    cin >> b;
    cout << "¬ведите n: ";
    cin >> n;
    double h = (b - a) / (2 * n);
    double x = a + (2 * h);
    double s1 = 0;
    double s2 = 0;

    for (int i = 1; i <= n; i++) {
        if (i < n) {
            s2 += function(x);
            x += h;
            s1 += function(x);
            x += h;
        }
        else {
            double s = (h / 3) * ((function(a) + 4 * function(a + h) + 4 * s1 + 2 * s2 + function(b)));
            cout << "s= " << s;
        }
    }


    return 0;
}

int main() {
    setlocale(LC_ALL, "RU");

    calculateFunction();

}