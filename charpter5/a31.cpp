

#include <iostream>
using namespace std;
int main() {
    long long N;
    long long Answer = 0;

    cin >> N;

    long long A1 = N / 3;
    long long A2 = N / 5;

    long long A3 = N / 15;

    cout << A1 + A2 - A3 << endl;

    return 0;
}
