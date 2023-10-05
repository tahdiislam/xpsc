#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    int i = 0, j = 0;
    queue<int> q;
    while (j < n)
    {
        if (arr[j] < 0)
            q.push(arr[j]);
        if (j >= k - 1)
        {
            if (q.size() != 0)
                cout << q.front() << endl;
            else
                cout << 0 << endl;
            if (arr[i] < 0)
                q.pop();
            i++;
        }
        j++;
    }
    return 0;
}