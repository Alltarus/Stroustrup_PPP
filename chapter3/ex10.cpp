
#include <iostream>
using namespace std;

int main()
{
    cout << "Введите знак операции и два числа: ";
    char oper {};
    float a {}, b {}, res {};

    cin >> oper >> a >> b;

    switch (oper)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    }

    cout << a << oper << b << " = " << res << endl;

    return 0;
}