#include <iostream>
using namespace std;

int gcd(int a, int b, int c) {
    int result = 1;
    for (int i = 2; i <= a && i <= b && i <= c; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            result = i;
        }
    }
    return result;
}

int main() {
    int K;
    cin >> K;

    long long sum = 0;

    for (int a = 1; a <= K; a++) {
        for (int b = 1; b <= K; b++) {
            for (int c = 1; c <= K; c++) {
                sum += gcd(a, b, c);
            }
        }
    }

    cout << sum << endl;

    return 0;
}
