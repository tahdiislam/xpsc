#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while (T--)
    {
        cin >> X;
        if (X <= 24)
        {
            cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
    }
    return 0;
}