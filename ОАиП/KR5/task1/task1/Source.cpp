#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    // �������� �������� ����
    QWidget window;
    window.setWindowTitle("�����������");

    // �������� ��������� ����������
    QLabel* label1 = new QLabel("����� 1:");
    QLabel* label2 = new QLabel("����� 2:");
    QLabel* resultLabel = new QLabel("���������:");

    QLineEdit* num1Edit = new QLineEdit();
    QLineEdit* num2Edit = new QLineEdit();
    QLineEdit* resultEdit = new QLineEdit();
    resultEdit->setReadOnly(true);

    QPushButton* addButton = new QPushButton("��������");
    QPushButton* subtractButton = new QPushButton("���������");
    QPushButton* multiplyButton = new QPushButton("���������");
    QPushButton* divideButton = new QPushButton("�������");

    // �������� ����� ��� ���������� ���������
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

    // ��������� ����� � ����
    window.setLayout(layout);

    // ����������� ������ � �������� ������
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

    // ����������� ����
    window.show();

    // ������ ��������� ����� ��������� �������
    return app.exec();
}