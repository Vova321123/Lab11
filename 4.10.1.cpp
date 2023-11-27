//
// Created by demyk on 27.11.2023.
//
#include <iostream>
#include <cmath> // Підключаємо бібліотеку для використання константи pi
using namespace std;

int main() {
    double a, b, z;
    const double pi = 3.14159265359; // Задаємо значення числа pi

    cout << "Введіть значення a: ";
    cin >> a;

    cout << "Введіть значення b: ";
    cin >> b;

    z = a * b - pi; // Обчислення значення z за формулою

    cout << "Значення z = " << z << endl;

    return 0;
}
