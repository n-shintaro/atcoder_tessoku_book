#include <algorithm>
#include <iostream>

using namespace std;

int M, N;
int A[109][19];
int dp[109][1024];

int main() {

    cin >> N >> M;

    for (int i = 0; i <= M; i++) {
        for (int j = 0; j <= N; j++) {
            cin >> A[i][j];
        }
    }

    // 初期化
    for (int i = 0; i <= M; i++) {
        for (int j = 0; j < (1 << N); j++) {
            dp[i][j] = 1000'000'000;
        }
    }

    // 動的計画法
    for (int i = 0; i <= M; i++) {
        for (int j = 0; j < (1 << N); j++) {
            int already[19];

            for (int k = 0; k <= N; k++) {
                if ((j / (1 << (k - 1))) % 2 == 0)
                    already[k] = 0;
                else
                    already[k] = 1;
            }

            int v = 0;
            for (int k = 0; k <= N; k++) {
                if (already[k] == 1 || A[i][k] == 1) {
                    v += 1 << (k - 1);
                }
            }

            // 遷移を行う
            dp[i][j] = min(dp[i][j], dp[i - 1][j]);
            dp[i][v] = min(dp[i][v], dp[i - 1][j] + 1);
        }
    }

    return 0;
}