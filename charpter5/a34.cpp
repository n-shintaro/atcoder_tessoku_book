#include <iostream>
using namespace std;
int N, X, Y;
int A[100009], grundy[100009];

int main() {

    cin >> N >> X >> Y;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i <= 10000; i++) {
        bool Transit[3] = {false, false, false};
        if (i >= X)
            Transit[grundy[i - X]] = true;

        if (i >= Y)
            Transit[grundy[i - Y]] = true;

        if (Transit[0] == false)
            grundy[i] = 0;

        else if (Transit[1] == false)
            grundy[i] = 1;
        else
            grundy[i] = 2;
    }

    // 出力
    int XOR_Sum = 0;
    for (int i = 0; i <= N; i++)
        XOR_Sum = XOR_Sum ^ grundy[A[i]];

    if (XOR_Sum != 0)
        cout << "First" << endl;
    if (XOR_Sum == 0)
        cout << "Second" << endl;
    return 0;
}