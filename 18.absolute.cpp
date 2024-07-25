#include <iostream>
using namespace std;
int abs(int num) {
    return (num < 0) ? -num : num;
}
float abs(float num) {
    return (num < 0.0) ? -num : num;
}

int main() {
    int intNum;
    float floatNum;
    cout << "Enter an integer number: ";
    cin >> intNum;
    cout << "Absolute value of " << intNum << " is " << abs(intNum) << endl;
    cout << "Enter a floating-point number: ";
    cin >> floatNum;
    cout << "Absolute value of " << floatNum << " is " << abs(floatNum) << endl;

    return 0;
}

