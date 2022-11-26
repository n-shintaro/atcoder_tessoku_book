#include <algorithm>
#include <iostream>
using namespace std;

long long N, W, w[109], v[109];
long long dp[109][100009];

int main() {
    // 入力
    cin >> N >> W;
    for (int i = 1; i <= N; i++)
        cin >> w[i] >> v[i];

    // 動的計画法 (i = 0)
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= W; j++)
            dp[i][j] = -1'000'000'000'000'000LL;

    dp[0][0] = 0;

    // 動的計画法 (i >= 1)
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= W; j++) {
            if (j < w[i])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
        }
    }

    // 出力
    long long Answer = 0;
    for (int j = 1; j <= W; j++) {
        Answer = max(Answer, dp[N][j]);
    }
    cout << Answer << endl;
}