#include <iostream>
#include <vector>
using namespace std;

void countAdjacentPairs() {
    int n;
    cout << "Введіть кількість чисел: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Введіть " << n << " цілих чисел: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (numbers[i] == numbers[i + 1]) {
            count++;
        }
    }

    cout << "Кількість пар 'сусідніх' чисел, рівних між собою: " << count << endl;
}

int main() {
    int choice;

    cout << "Виберіть номер задачі для виконання (1 - обчислення пар 'сусідніх' чисел): ";
    cin >> choice;

    switch (choice) {
        case 1:
            countAdjacentPairs();
            break;
        default:
            cout << "Неправильний номер задачі.\n";
    }

    return 0;
}
