#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N, D;
    cin >> N;
    int A[N + 1];
    int P[N + 1];
    int Q[N + 1];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    cin >> D;

    int L[D + 1], R[D + 1];

    for (int i = 1; i <= D; i++) {
        cin >> L[i] >> R[i];
    }

    P[1] = A[1];
    for (int i = 2; i <= N; i++) {
        P[i] = max(P[i - 1], A[i]);
    }

    Q[N] = A[N];
    for (int i = N - 1; i >= 1; i--) {
        Q[i] = max(Q[i +1], A[i]);
    }

    for (int i = 1; i <= D; i++) {
        cout << max(P[L[i] - 1], Q[R[i] + 1]) << endl;
    }

    return 0;
}
