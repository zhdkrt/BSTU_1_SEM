#include <iostream>
#include <cmath>

using namespace std;

double function(double x) {
    return cos(x) + x - 7;
}

double calculateFunction() {
    double a, b, e;
    
    cout << "¬ведите a: ";
    cin >> a;
    cout << "¬ведите b: ";
    cin >> b;
    cout << "¬ведите точность (e): ";
    cin >> e;

    double x = (a + b) / 2;

    
    while (abs(a - b) > 2 * e) {
        if (function(x) * function(a) <= 0) {
            b = x;
        }
        else {
            a = x;
        }

        x = (a + b) / 2;
    }
    cout << "«начение корн€: " << x << endl;

    return 0;
}

int main() {
    
    setlocale(LC_ALL, "RU");
    calculateFunction();

}