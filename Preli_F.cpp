#include <iostream>
#include <cmath>
using namespace std;


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct Fraction {
    long long numerator;
    long long denominator;

    void reduce() {
        long long gcdValue = gcd(numerator, denominator);
        numerator /= gcdValue;
        denominator /= gcdValue;
    }

    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};

long long square(long long x) {
    return x * x;
}

Fraction computeShortestJumpSquared(long long a, long long b, long long c) {

    long long s = (a + b + c) / 2;

    long long areaSquared = s * (s - a) * (s - b) * (s - c);

    Fraction result;
    result.numerator = areaSquared;
    result.denominator = square(s);

    result.reduce();
    
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long X, Y, Z;
        cin >> X >> Y >> Z;
        
        Fraction answer = computeShortestJumpSquared(X, Y, Z);
        answer.print();
    }
    return 0;
}
