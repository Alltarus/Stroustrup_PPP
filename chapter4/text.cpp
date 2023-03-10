

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> words;
    for (string temp; cin >> temp;)
        words.push_back(temp);

    cout << "Количество слов: " << words.size() << endl;

    sort(words.begin(), words.end());

    for (unsigned int i = 0; i < words.size(); ++i)
        if (i == 0 || words[i - 1] != words[i])
            cout << words[i] << endl;

    return 0;
}