

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string digit {};
    cin >> digit;

    if (digit == "zero")
        cout << 0 << endl;
    else if (digit == "one")
        cout << 1 << endl;
    else if (digit == "two")
        cout << 2 << endl;
    else if (digit == "three")
        cout << 3 << endl;
    else if (digit == "four")
        cout << 4 << endl;
    else if (digit == "five")
        cout << 5 << endl;
    else if (digit == "six")
        cout << 6 << endl;
    else if (digit == "seven")
        cout << 7 << endl;
    else if (digit == "eight")
        cout << 8 << endl;
    else if (digit == "nine")
        cout << 9 << endl;
    else
        cout << "Нет такой цифры" << endl;

    return 0;
}