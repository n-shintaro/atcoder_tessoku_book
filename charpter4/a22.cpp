#include <algorithm>
#include <iostream>

using namespace std;

int N;
int A[100009], B[100009], dp[100009];

int main() {
    cin >> N;

    for (int i = 1; i <= N - 1; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N - 1; i++) {
        cin >> B[i];
    }

    // 配列の初期化
    dp[0] = 0;
    for (int i = 2; i <= N; i++) {
        dp[i] = -1000000;
    }

    for (int i = 1; i <= N; i++) {
        dp[A[i]] = max(dp[A[i]], dp[i] + 100);
        dp[B[i]] = max(dp[B[i]], dp[i] + 150);
    }

    cout << dp[N] << endl;

    return 0;
}