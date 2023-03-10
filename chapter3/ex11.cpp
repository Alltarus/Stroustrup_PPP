

#include <iostream>
using namespace std;

int main()
{
    int cents {}, temp {};
    cout << "1-центовые: ";
    cin >> temp;
    cents += temp;
    cout << "5-центовые: ";
    cin >> temp;
    cents += temp * 5;
    cout << "10-центовые: ";
    cin >> temp;
    cents += temp * 10;
    cout << "25-центовые: ";
    cin >> temp;
    cents += temp * 25;
    cout << "50-центовые: ";
    cin >> temp;
    cents += temp * 50;

    cout << "Итого: " << cents << " центов или " 
        << cents / 100 << " долларов и " << cents % 100 << " центов" << endl;

    return 0;
}