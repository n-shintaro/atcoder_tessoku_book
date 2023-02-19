#include <algorithm>
#include <iostream>

using namespace std;

string S, T;
int dp[2009][2009];

int main() {

    cin >> S;
    cin >> T;

    // 動的計画法
    dp[0][0] = 0;
    for (int i = 0; i <= S.size(); i++) {
        for (int j = 0; j <= T.size(); j++) {

            // 文字が同じ場合
            if (S[i - 1] == T[j - 1] && i >= 1 && j >= 1) {
                dp[i][j] =
                    max({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + 1});
            }

            else if (i >= 1 && j >= 1) {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }

            else if (i >= 1) {
                dp[i][j] = dp[i - 1][j];
            }

            else if (j >= 1) {
                dp[i][j] = dp[i][j - 1];
            }
        }
    }

    cout << dp[S.size()][T.size()] << endl;

    return 0;
}