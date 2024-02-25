#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    // Создание главного окна
    QWidget window;
    window.setWindowTitle("Калькулятор");

    // Создание элементов интерфейса
    QLabel* label1 = new QLabel("Число 1:");
    QLabel* label2 = new QLabel("Число 2:");
    QLabel* resultLabel = new QLabel("Результат:");

    QLineEdit* num1Edit = new QLineEdit();
    QLineEdit* num2Edit = new QLineEdit();
    QLineEdit* resultEdit = new QLineEdit();
    resultEdit->setReadOnly(true);

    QPushButton* addButton = new QPushButton("Сложение");
    QPushButton* subtractButton = new QPushButton("Вычитание");
    QPushButton* multiplyButton = new QPushButton("Умножение");
    QPushButton* divideButton = new QPushButton("Деление");

    // Создание сетки для размещения элементов
    QGridLayout* layout = new QGridLayout();
    layout->addWidget(label1, 0, 0);
    layout->addWidget(num1Edit, 0, 1);
    layout->addWidget(label2, 1, 0);
    layout->addWidget(num2Edit, 1, 1);
    layout->addWidget(resultLabel, 2, 0);
    layout->addWidget(resultEdit, 2, 1);
    layout->addWidget(addButton, 3, 0);
    layout->addWidget(subtractButton, 3, 1);
    layout->addWidget(multiplyButton, 4, 0);
    layout->addWidget(divideButton, 4, 1);

    // Установка сетки в окно
    window.setLayout(layout);

    // Подключение слотов к сигналам кнопок
    QObject::connect(addButton, &QPushButton::clicked, [&]() {
        int num1 = num1Edit->text().toInt();
        int num2 = num2Edit->text().toInt();
        int result = num1 + num2;
        resultEdit->setText(QString::number(result));
        });

    QObject::connect(subtractButton, &QPushButton::clicked, [&]() {
        int num1 = num1Edit->text().toInt();
        int num2 = num2Edit->text().toInt();
        int result = num1 - num2;
        resultEdit->setText(QString::number(result));
        });

    QObject::connect(multiplyButton, &QPushButton::clicked, [&]() {
        int num1 = num1Edit->text().toInt();
        int num2 = num2Edit->text().toInt();
        int result = num1 * num2;
        resultEdit->setText(QString::number(result));
        });

    QObject::connect(divideButton, &QPushButton::clicked, [&]() {
        int num1 = num1Edit->text().toInt();
        int num2 = num2Edit->text().toInt();
        double result = static_cast<double>(num1) / num2;
        resultEdit->setText(QString::number(result));
        });

    // Отображение окна
    window.show();

    // Запуск основного цикла обработки событий
    return app.exec();
}