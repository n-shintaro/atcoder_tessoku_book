#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, A[100009], B[100009], Cost[100009];

int main() {

    cin >> N;

    for (int i = 1; i <= N - 1; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N - 2; i++) {
        cin >> B[i];
    }

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            Cost[i] = 0;
        } else if (i == 2) {
            Cost[i] = A[i - 1];
        } else {
            Cost[i] = min(A[i - 1] + Cost[i - 1], B[i - 2] + Cost[i - 2]);
        }
    }

    cout << Cost[N] << endl;

    return 0;
}