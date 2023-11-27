#include <iostream>
#include <vector>
using namespace std;

void printPayments(int amount, int denomination, vector<int>& result) {
    if (amount == 0) {
        // Вивести комбінацію купюр
        for (size_t i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i != result.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
        return;
    }

    for (int i = denomination; i <= amount && i <= 100; i += denomination) {
        result.push_back(i);
        printPayments(amount - i, denomination + 1, result);
        result.pop_back();
    }
}

int main() {
    int k;
    cout << "Введіть суму (менше за 100): ";
    cin >> k;

    vector<int> result;
    cout << "Способи виплати: " << endl;
    printPayments(k, 1, result);

    return 0;
}
