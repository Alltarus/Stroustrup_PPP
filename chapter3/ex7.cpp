

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Введите три строки: ";
    string a {}, b {}, c {};
    cin >> a >> b >> c;
    string temp {};
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
    cout << "Отсортированные строки: " << a << ", " << b << ", " << c << endl;
    
    return 0;
}