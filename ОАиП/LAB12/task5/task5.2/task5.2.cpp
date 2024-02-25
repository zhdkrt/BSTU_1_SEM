#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    char s = '0';
    string str;
    int count = 1, minCount = 235876;

    cout << "¬ведите строку: ";
    getline(cin, str);

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1])
            count++;
        else {
            if (minCount > count) {
                minCount = count;
                s = str[i - 1];
            }
            count = 1;
        }
    }

    if (minCount > count) {
        minCount = count;
        s = str[str.length() - 1];
    }

    cout << s << endl;
    cout << minCount;

    return 0;
}