#include <iostream>
using namespace std;

int N, X, A[100];
bool Answer = false;

int main()
{
    int N;
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            Answer = true;
            break;
        }
    }
    if (Answer == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
