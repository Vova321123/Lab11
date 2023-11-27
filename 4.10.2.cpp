#include <iostream>
#include <cmath>
using namespace std;

// Оголошення функції
double f(double x) {
    return 4 * sin(2 * x * x + cos(x));
}

int main() {
    double a, b, I, z;

    cout << "Введіть значення a: ";
    cin >> a;

    cout << "Введіть значення b: ";
    cin >> b;

    // Обчислення інтегралу за формулою трапецій
    int n = 1000; // Кількість відрізків для апроксимації інтегралу
    double h = (b - a) / n;
    I = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < n; ++i) {
        I += f(a + i * h);
    }
    I *= h;

    // Обчислення значення z
    z = a * b - I;

    cout << "I = " << I << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "z = " << z << endl;

    return 0;
}
