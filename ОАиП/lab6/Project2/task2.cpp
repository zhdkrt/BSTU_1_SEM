#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double f, y, t, c, d;
    cout << "������� ����� f: ";
    cin >> f;
    cout << "������� ����� y: ";
    cin >> y;
    for (int n = 0; n < 5; n++) {
        cout << "������� ����� t: ";
        cin >> t;
        for (f = 1; f <= 5; f += 2) {
            c = 2 * sin(f / 2) + log(t);
            if (c >= 3)
                d = y * exp(-2 * t) + f;
            if (c < 3)
                d = y - pow(y, 3);
            cout << "��� f = " << f << endl;
            cout << "��� t = " << t << endl;
            cout << "c = " << c << endl;
            cout << "d = " << d << endl;
        }
    }
  return 0;
}