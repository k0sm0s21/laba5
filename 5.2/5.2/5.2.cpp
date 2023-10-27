#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    int num, i;
    cout << "Введите число: ";
    cin >> num;
    for (i = 0; i < 100; i++) {
        if (num == 0) break;
        else num /= 10;
    }
    cout << i << "\n";
}