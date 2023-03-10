
#include <iostream>
using namespace std;

double max_val(double a, double b)
{
    return (a > b) ? a : b;
}

double min_val(double a, double b)
{
    return (a < b) ? a : b;
}

int main()
{
    double old_val {}, new_val {}, maximum = __DBL_MIN__, minimum = __DBL_MAX__;
    constexpr double error_rate = 1.0 / 100;
    while (cin >> new_val)
    {
        double max = max_val(old_val, new_val), min = min_val(old_val, new_val);
        cout << old_val << " " << new_val << endl;
        if (old_val == new_val)
            cout << "Числа равны" << endl;
        else if (abs(old_val - new_val) < error_rate)
            cout << "Числа почти равны" << endl;
        else
        {            
            old_val = (old_val < new_val) ? old_val: new_val;
            cout << "Наименьшее = " << min << endl
                << "Наибольшее = " << max << endl;
        }

        maximum = max_val(maximum, max);
        minimum = min_val(minimum, min);
        cout << "Наибольшее из вводимых = " << maximum << endl
            << "Наименьшее из вводимых = " << minimum << endl;

        old_val = new_val;
    }   

    return 0;
}