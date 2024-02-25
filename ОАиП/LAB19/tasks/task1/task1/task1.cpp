#include <iostream>

int f1(const char* s) {
    std::cout << s << " \nВыполняется тест №1" << std::endl;
    return 1;
}

int f2(const char* s) {
    std::cout << s << " \nВыполняется тест №2" << std::endl;
    return 2;
}

void callfun(const char* s, int (*f)(const char*)) {
    std::cout << " f() = " << f(s) << '\n';
}

int main() {
    setlocale(LC_ALL, "Russian");
    callfun("Тест №1 вызван", f1);
    callfun("Тест №2 вызван", f2);
}