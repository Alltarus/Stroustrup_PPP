#include <iostream>
#include <string.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(0, ".1251");

    cout << "Введите ваше имя (и нажмите Enter): ";
    string first_name {};
    cin >> first_name;
    
    cout << "Введите Ваш возраст: ";
    int age {};
    cin >> age;
    cout << "Привет, " << first_name << " (возраст - " << age << ")" << endl;  

    return 0;
}