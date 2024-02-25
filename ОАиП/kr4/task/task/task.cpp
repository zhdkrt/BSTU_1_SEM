#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	const int size = 100;
	char str[size] = "Everyone is a genius at least once a year. A real genius has his original ideas closer together.";

	char* word = strtok(str, " ");
	bool flag = false;

	while (word != nullptr) {
		if (strlen(word) == 5 && word[strlen(word) - 1] != '.') {
			cout << "Cлово из 5 букв: " << word << endl;
			flag = true;
		}
		
		word = strtok(nullptr, " ");
		
	}
	if (!flag)
		cout << "Слово отсутствует";
}