#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    for (int num = 6;; num++) {
        if (isPerfect(num)) {
            cout << num << " is a perfect number." << endl;
        }
    }
    return 0;
}
