#include <iostream>
using namespace std;
int A, B;

int GCD(int A, int B) {
    while (A >= 1 && B >= 1) {
        if (A >= B)
            A = A % B;
        else {
            B = B % A;
        }
    }

    if (A != 0)
        return A;
    return B;
}

int main() {

    cin >> A >> B;
    cout << GCD(A, B) << endl;
    return 0;
}