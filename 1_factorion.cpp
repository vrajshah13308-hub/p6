// 1. Boolean function to test whether a number is a factorion
// A factorion equals the sum of the factorials of its decimal digits.
// Example: 145 = 1! + 4! + 5! = 1 + 24 + 120

#include <iostream>
using namespace std;

int factorial(int d) {
    int f = 1;
    for (int i = 2; i <= d; i++)
        f *= i;
    return f;
}

bool isFactorion(int n) {
    int original = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    return (sum == original);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isFactorion(num))
        cout << num << " is a factorion." << endl;
    else
        cout << num << " is not a factorion." << endl;

    return 0;
}
