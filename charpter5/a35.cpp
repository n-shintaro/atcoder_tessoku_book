#include <iostream>
using namespace std;
int N, A[2009];
int dp[2009][2009];

int main() {
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        dp[N][i] = A[i];
    }

    // 動的計画法
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N; j++) {
            if (i % 2 == 1)
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]);
            if (i % 2 == 0)
                dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    cout << dp[1][1] << endl;
    return 0;
}