#include <algorithm>
#include <iostream>
using namespace std;

long long K, N;
long long A[100009] = {};

bool check(long long sec) {
    long long sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += sec / A[i];
    }
    if (sum >= K) {
        return true;
    }
    return false;
}

int main() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    long long L = 0;
    long long R = 1000000000;

    while (L < R) {
        if (check((L + R) / 2)) {
            R = (L + R) / 2;
        }

        if (!check((L + R) / 2)) {
            L = (L + R) / 2 + 1;
        }
    }

    cout << L << endl;

    return 0;
}