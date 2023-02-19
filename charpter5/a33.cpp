#include <iostream>
using namespace std;
int N, A[100009];

int main() {

    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    int XOR_sum = A[1];

    for (int i = 2; i <= N; i++)
        XOR_sum = XOR_sum ^ A[i];

    if (XOR_sum == 0)
        cout << "Second" << endl;

    else
        cout << "First" << endl;

    return 0;
}
