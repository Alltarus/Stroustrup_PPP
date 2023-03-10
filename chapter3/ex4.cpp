

#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int val1 {}, val2 {};
    cout << "Введите два числа: ";
    cin >> val1 >> val2;

    cout << "Сумма равна " << val1 + val2 << endl;
    cout << "Разность равна " << val1 - val2 << endl;
    cout << "Произведение равно " << val1 * val2 << endl;
    cout << "Частное равно " << val1 / val2 << endl;

    return 0;
}