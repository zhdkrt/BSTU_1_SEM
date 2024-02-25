#include <iostream>

int f1(const char* s) {
    std::cout << s << " \n����������� ���� �1" << std::endl;
    return 1;
}

int f2(const char* s) {
    std::cout << s << " \n����������� ���� �2" << std::endl;
    return 2;
}

void callfun(const char* s, int (*f)(const char*)) {
    std::cout << " f() = " << f(s) << '\n';
}

int main() {
    setlocale(LC_ALL, "Russian");
    callfun("���� �1 ������", f1);
    callfun("���� �2 ������", f2);
}