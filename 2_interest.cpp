// 2. Function interest() to calculate compound interest.
// Parameters: Principal (Rs.), Rate (%), Time (years), Compounded Yearly (bool)
// Defaults: Principal = 100000, Rate = 5%, Time = 2 years, Compounded = Yearly

#include <iostream>
#include <cmath>
using namespace std;

void interest(double principal = 100000.0, double rate = 5.0,
              double time = 2.0, bool compoundedYearly = true) {
    double amount;

    if (compoundedYearly)
        amount = principal * pow(1 + rate / 100, time);
    else
        amount = principal * pow(1 + rate / 200, 2 * time);

    double ci = amount - principal;
    cout << "Principal = Rs. " << principal
         << ", Rate = " << rate << "%, Time = " << time << " years, "
         << (compoundedYearly ? "Yearly" : "Half-yearly") << " compounding" << endl;
    cout << "Compound Interest = Rs. " << ci << endl << endl;
}

int main() {
    interest();                              // all defaults
    interest(200000, 8, 3, false);           // half-yearly, custom values
    interest(50000);                         // only principal given
    return 0;
}
