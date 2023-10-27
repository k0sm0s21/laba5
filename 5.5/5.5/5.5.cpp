#include <iostream>
#include <math.h>// математическая библиотека
using namespace std;
int main() {
    setlocale(0, "");
    int a = 3, b = -4, c = 9;
    double D = b * b - 4 * a * c; //DOUBLE - двойная точность после запятой
    if (D > 0) {             //если дискрименант больше 0 
        double x1 = (-b + sqrt(D)) / (2 * a); // первый корень дискрименанта
        double x2 = (-b - sqrt(D)) / (2 * a); // второй корень дискрименанта
        cout << "Уравнение имеет два корня:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0) {       //если дискрименант равен 0
        double x = -b / (2 * a);
        cout << "Уравнение имеет один корень:" << endl;
        cout << "x = " << x << endl;
    }
    else {
        cout << "Уравнение не имеет действительных корней." << endl;
    }

    return 0;
}