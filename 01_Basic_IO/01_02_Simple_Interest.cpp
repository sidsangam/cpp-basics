#include <iostream>

using namespace std;

int main() {
    float principal, rate, time, interest;
    cout << "Calculate your interest-" << endl;
    cout << "Principal amount:" << endl;
    cin >> principal;
    cout << "Rate of Interest:" << endl;
    cin >> rate;
    cout << "Tenure of Investment (in years):" << endl;
    cin >> time;
    interest = (principal * rate * time) / 100;
    cout << "Simple Interest = " << interest;
    return 0;
}

