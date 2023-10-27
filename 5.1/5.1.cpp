#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num;
    int sum = 0;

    cout <<"Введите число: ";
    cin >> num;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    cout << "сумма = " << sum << endl;

    return 0;
}