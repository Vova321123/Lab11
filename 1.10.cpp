#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Введіть номер дня тижня (1-7): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Понеділок: Математика, Фізика\n";
            break;
        case 2:
            cout << "Вівторок: Історія, Література\n";
            break;
        case 3:
            cout << "Середа: Англійська, Хімія\n";
            break;
        case 4:
            cout << "Четвер: Географія, Біологія\n";
            break;
        case 5:
            cout << "П'ятниця: Фізкультура, Музика\n";
            break;
        case 6:
            cout << "Субота: Вихідний\n";
            break;
        case 7:
            cout << "Неділя: Вихідний\n";
            break;
        default:
            cout << "Неправильно введений день тижня!\n";
    }

    // Використання if
    if (day >= 1 && day <= 5) {
        cout << "Завтра буде заняття.\n";
    } else {
        cout << "Завтра вихідний.\n";
    }

    return 0;
}
