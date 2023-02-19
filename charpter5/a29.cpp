#include <iostream>
using namespace std;

long long Power(long long a, long long b, long long m) {
    long long p = a;
    int Answer = 1;

    for (int i = 0; i < 30; i++) {
        int wari = (1 << i);
        if ((b / wari) % 2 == 1) {
            Answer = (Answer * p) % m;
        }
        p = (p * p) % m;
    }

    return Answer;
}


int main() {

    long a, b;
    cin >> a >> b;

    cout << Power(a, b, 1000000007) << endl;
    return 0;
}