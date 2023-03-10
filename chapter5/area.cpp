

#include <iostream>
using namespace std;

class Bad_area {};

int area(int length, int width)
{
    if (length <= 0 || width <= 0) 
        throw Bad_area {};
    return length * width;
}

int main()
{
    try
    {
        cout << area(-1, -1) << endl;
    }
    catch(Bad_area)
    {
        std::cerr << "Произошла ошибка" << '\n';
    }
    
    

    return 0;
}