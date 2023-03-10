
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9};
    vector<string> vs = {"asd", "qwe"};
    vector<int> vemptyi(6);
    vector<string> vemptys(4);

    vector<int> v_int = {1,2,3,4,5,6,7,8,9,0};
    for (unsigned int i = 0; i < v_int.size(); ++i)
        cout << v_int[i] << '\t';
    cout << endl;

    v_int.push_back(10);

    for (int x : v_int)
        cout << x << '\t';
    cout << endl;

    
    cout << "Введите температуру: ";
    vector<double> temps;
    for (double temp; cin >> temp;)
        temps.push_back(temp);

    double sum = 0;
    for (int x : temps)
        sum += x;
    
    cout << "Arg. temp.: " << sum / temps.size() << endl;

    sort(temps.begin(), temps.end());
    cout << "Median temp. = " << temps[temps.size()/2] << endl;

    return 0;
}