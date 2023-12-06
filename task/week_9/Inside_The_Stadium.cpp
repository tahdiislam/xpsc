#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, sum = 0, count = 0;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            sum = sum + A[i];
            if (sum == (i + 1))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}