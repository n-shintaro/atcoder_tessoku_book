#include <iostream>
using namespace std;

int main() {
    int N; // カードの枚数
    int K; //合計値

    cin >> N >> K;

    int Answer = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int k;
            k = N - i - j;

            if (k >= 1 && K <= N) {
                Answer++;
            }
        }
    }

    cout << Answer << endl;

    return 0;
}
