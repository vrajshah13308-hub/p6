// 4. Recursive function to find GCD using the Euclidean Algorithm

#include <iostream>
using namespace std;

int gcd(int m, int n) {
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}

int main() {
    int a, b;
    cout << "Enter two positive integers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " = " << gcd(a, b) << endl;
    return 0;
}
