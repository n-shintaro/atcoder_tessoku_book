#include <algorithm>
#include <iostream>
using namespace std;

long long K, N;
long long A[100009] = {};

int main() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int Right[N];
    for (int i = 1; i <= N - 1; i++) {

        if (i == 1)
            Right[i] = 1;
        else
            Right[i] = Right[i - 1];

        while (A[Right[i] + 1] - A[i] <= K && Right[i] < N) {
            Right[i] += 1;
        }
    }

    long long Answer = 0;
    for (int i = 1; i <= N - 1; i++) {
        Answer += (Right[i] - i);
    }

    cout << Answer << endl;
    return 0;
}