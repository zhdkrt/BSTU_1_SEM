#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    double p, m, c;
    for (m = 1; m <= 4; m += 0.1) {
        for (c = 0.3; c <= 1; c += 0.1) {
            p = 2 / m + c;
            cout << "p= " << p << endl;
        }
    }
}
