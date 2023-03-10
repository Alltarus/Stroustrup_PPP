#include <iostream>
#include <locale>
using namespace std;

int main()
{
    cout << "Программа переводит мили в километры. Введите мили: ";
    float miles {};
    cin >> miles;

    cout << miles << " миль = " << miles * 1.609 << " километров" << endl;

    return 0;
}