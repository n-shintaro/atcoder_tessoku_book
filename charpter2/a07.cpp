#include <iostream>
using namespace std;

int main() {
    int D;
    int N;
    int Q, L[100009], R[100009];
    int attendees[100009];

    cin >> D;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> L[i] >> R[i];
    }

    for (int i = 1; i <= N; i++) {
        attendees[L[i]] += 1;
        attendees[R[i] + 1] -= 1;
    }

    int sum = 0;
    for (int i = 1; i <= D; i++) {
        sum += attendees[i];
        cout << sum << endl;
    }
}
