#include <iostream>
#include <string.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(0, ".1251");
    cout << "Введите ваше имя (и нажмите Enter): ";
    string first_name;
    cin >> first_name;
    cout << "Привет, " << first_name << endl;
    return 0;
}