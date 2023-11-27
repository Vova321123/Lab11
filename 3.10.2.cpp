#include <iostream>
#include <vector>
using namespace std;

int countSpeedingViolations(int maxSpeed, const vector<int>& speeds) {
    int violations = 0;
    for (int speed : speeds) {
        if (speed > maxSpeed) {
            violations++;
        }
    }
    return violations;
}

int main() {
    int maxSpeedLimit;
    cout << "Enter the speed limit on the road: ";
    cin >> maxSpeedLimit;

    int numberOfReadings;
    cout << "Enter the number of speed readings: ";
    cin >> numberOfReadings;

    vector<int> recordedSpeeds(numberOfReadings);
    cout << "Enter the speeds of cars: ";
    for (int i = 0; i < numberOfReadings; ++i) {
        cin >> recordedSpeeds[i];
    }

    int violations = countSpeedingViolations(maxSpeedLimit, recordedSpeeds);
    cout << "Number of speeding violations: " << violations << endl;

    return 0;
}
