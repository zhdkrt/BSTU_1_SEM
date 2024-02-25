#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double x[] = { 8, 1.9, -4, 1 };
    double a = 105e-4, m = 4, i = 7, s, p;
    for (int n = 0; n < 4; n++) {
        s = exp(-a * x[n]) - log(i / x[n] * m) / pow(log(m), 2);
        if (s <= 2 * x[n])
            p = sin(-6 * s);
        else
            p = pow((-i * s), 2);
        cout << "n = " << n << ", s = " << s << ", p = " << p << endl;
    }
}