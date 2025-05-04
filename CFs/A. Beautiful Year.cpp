#include <iostream>
#include <string>
using namespace std;

bool hasDistinctDigits(int year) {
    bool digits[10] = {false};
    while (year > 0) {
        int digit = year % 10;
        if (digits[digit]) {
            return false; 
        }
        digits[digit] = true;
        year /= 10;
    }
    return true; 
}

int findNextDistinctYear(int year) {
    while (true) {
        year++;
        if (hasDistinctDigits(year)) {
            return year;
        }
    }
}

int main() {
    int year;
    cin >> year;
    int nextDistinctYear = findNextDistinctYear(year);
    cout << nextDistinctYear << endl;
    return 0;
}
