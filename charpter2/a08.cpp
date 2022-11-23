#include <iostream>
using namespace std;

int main() {
    int H;
    int W;

    cin >> H >> W;

    int X[H + 1][W + 1], Sum[H + 1][W + 1];
    int Q;

    for (int h = 1; h <= H; h++) {
        for (int w = 1; w <= W; w++) {
            cin >> X[h][w];
        }
    }

    cin >> Q;

    int A[Q + 1], B[Q + 1], C[Q + 1], D[Q + 1], Answer[Q + 1];

    for (int i = 1; i <= Q; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    for (int h = 0; h <= H; h++) {
        for (int w = 0; w <= W; w++) {
            Sum[h][w] = 0;
        }
    }

    for (int h = 1; h <= H; h++) {
        for (int w = 1; w <= W; w++) {
            Sum[h][w] = Sum[h][w - 1] + X[h][w];
        }
    }

    for (int w = 1; w <= W; w++) {
        for (int h = 1; h <= H; h++) {
            Sum[h][w] = Sum[h - 1][w] + Sum[h][w];
        }
    }

    for (int i = 1; i <= Q; i++) {
        Answer[i] = Sum[C[i]][D[i]] - Sum[A[i] - 1][D[i]] -
                    Sum[C[i]][B[i] - 1] + Sum[A[i] - 1][B[i] - 1];

        cout << Answer[i] << endl;
    }

    return 0;
}