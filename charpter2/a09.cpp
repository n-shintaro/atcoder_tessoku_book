#include <iostream>
using namespace std;

int main() {
    int H;
    int W;
    int N;

    cin >> H >> W >> N;

    int X[H + 1][W + 1] = {};
    int Sum[H + 1][W + 1] = {};
    int A[N + 2], B[N + 2], C[N + 2], D[N + 2];

    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    // 初期化
    for (int h = 0; h <= H; h++) {
        for (int w = 0; w <= W; w++) {
            Sum[h][w] = 0;
        }
    }

    for (int i = 1; i <= N; i++) {
        X[A[i]][B[i]] += 1;
        X[C[i] + 1][B[i]] -= 1;
        X[A[i]][D[i] + 1] -= 1;
        X[C[i] + 1][D[i] + 1] += 1;
    }

    for (int w = 1; w <= W; w++) {
        for (int h = 1; h <= H; h++) {
            Sum[h][w] = Sum[h - 1][w] + X[h][w];
        }
    }

    for (int h = 1; h <= H; h++) {
        for (int w = 1; w <= W; w++) {
            Sum[h][w] = Sum[h][w - 1] + Sum[h][w];
        }
    }

    for (int h = 1; h <= H; h++) {
        for (int w = 1; w <= W; w++) {
            cout << Sum[h][w];
        }
        cout << endl;
    }

    return 0;
}