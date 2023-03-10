

#include <iostream>
using namespace std;

class Exception {};

int main()
{
    try
    {
        double d {};
        cin >> d;
        if (!cin)
            throw runtime_error("некорректно введенные данные");
    }
    catch(runtime_error& e)
    {
        std::cerr << "Произошла ошибка: " << e.what() << '\n';
    }
    


    return 0;
}