#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    string first_name {};
    cout << "Введите ваше имя: ";
    cin >> first_name;

    string addressee {};
    cout << "Введите имя адресата: ";
    cin >> addressee;

    int addressee_age {};
    cout << "Введите возраст адресата: ";
    cin >> addressee_age;

    string friend_name {};
    cout << "Введите имя друга: ";
    cin >> friend_name;

    char friend_sex {0};
    cout << "Выберите пол друга (m or f): ";
    cin >> friend_sex;

    cout << "Привет, " << first_name << endl << endl;
    cout << "Дорогой " << first_name << " ... некоторый текст ..." << endl;
    cout << "Давно ли ты видел " << friend_name << "?" << endl;
    cout << "Если ты увидишь " << friend_name << " пожалуйста попроси " 
        << ((friend_sex == 'm') ? "его" : "её") << " позвонить мне." << endl;
    if (0 <= addressee_age && addressee_age <= 110)
        cout << "Я слышал, что тебе исполнилось " << addressee_age << " лет " << endl;
    else
    {
        cerr << "error: " << "Ты же шутишь" << '\n';
        cin.clear();
        cout << "Please enter a character to exit\n";
        char ch;
        cin >> ch;		
        exit(1);
    }

    return 0;
}