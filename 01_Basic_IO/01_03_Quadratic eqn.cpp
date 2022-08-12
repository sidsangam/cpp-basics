#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // input a, b, c
    int a, b, c;
    float discriminant, x1, x2, realPart, imaginaryPart;
    cout << "Please enter the values of a, b, and c" << endl;
    cin >> a >> b >> c;

    //if a==0
    if (a == 0) {
        cout << "This is not a quadratic equation.";
    }

        //else
    else {
        //calculate discriminant
        discriminant = b * b - 4 * a * c;
    }
       //if d > 0
       // real and different
       if (discriminant > 0) {
           cout << " Roots are real and different" << endl;
           x1 = (-b + sqrt(discriminant))/(2*a);
           x2 = (-b - sqrt(discriminant))/(2*a);
           cout << "Root 1 =" << x1 << endl;
           cout << "Root 2 =" << x2 << endl;
       }

       // else d < 0
       // complex and different
       else {
         cout << "Roots are complex and different." << endl;
         realPart = (float) -b/2*a;
         imaginaryPart = (float) sqrt(-discriminant)/(2*a);
         cout << "Root 1 =" << realPart << "+" << imaginaryPart << "i" << endl;
           cout << "Root 2 =" << realPart << "-" << imaginaryPart << "i" << endl;
       }

    return 0;
}
