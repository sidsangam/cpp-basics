#include <iostream>

using namespace std;

int main() {
    float Principle, Rate, Time, interest;
    cout << "Calculate your interest-" << endl;
    cout << "Principle amount:" << endl;
    cin >> Principle;
    cout << "Rate of interest:" << endl;
    cin >> Rate;
    cout << "Tenure of investment1:" << endl;
    cin >> Time;
    interest = (Principle * Rate * Time) / 100;
    cout << "Rate of interest = " << interest;
    return 0;
}

