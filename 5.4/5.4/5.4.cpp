#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int count = 0;
    int arr[5] = { 25,37,12,558,118 };
    for (int i = 0; i < 5; i++) {
        count = count + arr[i];
    }
    cout << "Cреднее арифметическое элементов массива: " << count / 5 << endl;
    return 0;
}