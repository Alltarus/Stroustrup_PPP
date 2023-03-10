
#include <iostream>
using namespace std;

int main()
{
    cout << "Введите число: ";
    int a {};
    cin >> a;

    cout << "Число " << a << " является " << ((a % 2 == 0) ? "четным" : "нечетным") << endl;

    return 0;
}