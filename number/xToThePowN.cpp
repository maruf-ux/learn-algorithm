#include <iostream>

using namespace std;

double pow(double x, int n) {
    double ans = 1;  // Initialize ans to 1

    // Handling negative powers
    if(n < 0) {
        n = -n;  // Convert n to positive for loop
        for(int i = 0; i < n; i++) {
            ans *= x;
        }
        ans = 1 / ans;  // Invert the result for negative power
    }
    else {  // Handling positive powers
        for(int i = 0; i < n; i++) {
            ans *= x;
        }
    }

    return ans;
}

int main() {
    double n = 2;
    int power = -2;

    cout << pow(n, power);  // The correct result should be 0.25
    return 0;
}
