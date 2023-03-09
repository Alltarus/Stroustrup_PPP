#include <iostream>
#include <locale>
#include <string.h>
using namespace std;

int main()
{
    string previous {};
    string current {};

    while (cin >> current)
    {
        if (previous == current)
            cout << "Повторяющееся слово: " << current << endl;
        previous = current;
    }

    return 0;
}