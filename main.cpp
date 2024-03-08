#include <iostream>
using namespace std;

bool isPerfect(unsigned long long int num) {
    unsigned long long int sum = 0;
    for (unsigned long long int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    for (unsigned long long int num = 6;; num++) {
        if (isPerfect(num)) {
            cout << num << " is a perfect number." << endl;
        }
    }
    return 0;
}
