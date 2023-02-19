#include <iostream>
using namespace std;
long long N, A[100009];
char T[100009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> T[i] >> A[i];
    }

    long long Answer = 0;

    for (int i = 1; i <= N; i++) {
        if (T[i] == '+')
            Answer += A[i];
        if (T[i] == '-')
            Answer -= A[i];
        if (T[i] == '*')
            Answer *= A[i];
    }

    if (Answer < 0)
        Answer += 10000;

    Answer %= 10000;
    cout << Answer << endl;

    return 0;
}