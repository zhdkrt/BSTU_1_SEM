#include <iostream>
#include <windows.h>

using namespace std;

bool endsWithAya(const char* word) {
    int len = 0;
    while (word[len] != '\0') {
        len++;
    }
    return len >= 2 && word[len - 2] == 'а' && word[len - 1] == '€';
}

void wordsEndingWithAya(char** words, int numWords) {
    cout << "—лова, оканчивающиес€ на -а€:" << endl;
    for (int i = 0; i < numWords; ++i) {
        if (endsWithAya(words[i])) {
            cout << words[i] << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numWords;
    cout << "¬ведите количество слов: ";
    cin >> numWords;

    char** words = new char* [numWords];
    for (int i = 0; i < numWords; ++i) {
        cout << "¬ведите слово " << i + 1 << ": ";
        char buffer[100];
        cin >> buffer;

        words[i] = new char[strlen(buffer) + 1];
        int j = 0;
        while (buffer[j] != '\0') {
            words[i][j] = buffer[j];
            j++;
        }
        words[i][j] = '\0';
    }

    wordsEndingWithAya(words, numWords);

    for (int i = 0; i < numWords; ++i) {
        delete[] words[i];
    }
    delete[] words;
}