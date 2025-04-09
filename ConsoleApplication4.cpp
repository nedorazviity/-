#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (cin.fail()) {
        cout << "Ошибка: Введите целое число." << endl;
        return 1;
    }

    if (number % 2 == 0)
        cout << "Число четное." << endl;
    else
        cout << "Число нечетное." << endl;

    return 0;
}