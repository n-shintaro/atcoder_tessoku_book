#include <iostream>
using namespace std;
int main() {
    int N, A, B;
    bool dp[10009];
    cin >> N >> A >> B;

    // 勝者を計算
    for (int i = 0; i <= N; i++) {
        if (i >= A && dp[i - A] == false) {
            dp[i] = true;
        } else if (i >= B && dp[i - B] == false) {
            dp[i] = true;
        } else {
            dp[i] = false;
        }
    }

    if (dp[N] == true)
        cout << "First" << endl;
    else
        cout << "Second" << endl;

    return 0;
}
