

#include <iostream>
using namespace std;

int main()
{
    cout << "Введите три числа: ";
    int a {}, b {}, c {};
    cin >> a >> b >> c;
    int temp {};
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    cout << "Числа по возрастанию: " << a << ", " << b << ", " << c << endl;
    
    return 0;
}