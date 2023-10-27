#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int count = 0;
    int arr[10] = { 4,47,75,89,42,94,2,75,15,44 };
    for (int i = 0; i < 10; i++) {
        count = count + arr[i];
    }
    cout << "Сумма всех элементов массива " << count << endl;
    return 0;
}