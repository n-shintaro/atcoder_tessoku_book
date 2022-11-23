#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N, X;

    cin >> N >> X;

    int A[N + 1];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int begin_point = 1;
    int end_point = N;
    for (int i = 1; i <= N; i++) {
        if (A[(begin_point + end_point) / 2] < X) {
            begin_point = (begin_point + end_point) / 2 + 1;
        } else if (A[(begin_point + end_point) / 2] > X) {
            end_point = (begin_point + end_point) / 2 - 1;
        } else if (A[(begin_point + end_point) / 2] == X) {
            cout << (begin_point + end_point) / 2 << endl;
            break;
        }

        if (begin_point == end_point) {
            cout << begin_point << endl;
            break;
        }
    }

    return 0;
}