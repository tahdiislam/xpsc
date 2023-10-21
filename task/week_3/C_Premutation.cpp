#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool con = false;
        for (int j = 0; j < n; j++)
        {
            if (!con)
            {
                con = true;
                vector<int> ar(n);
                vector<int> ar2;
                int arr[n + 1] = {0};
                for (int i = 0; i < n - 1; i++)
                {
                    int a;
                    cin >> a;
                    arr[a]++;
                    ar2.push_back(a);
                }
                int m;
                for (int i = 1; i <= n; i++)
                {
                    if (arr[i] == 0)
                    {
                        m = i;
                        break;
                    }
                }
                bool sm = true;
                for (int i = 1; i <= n; i++)
                {
                    if (m > i)
                    {
                        sm = false;
                        break;
                    }
                }
                if (sm)
                {
                    cout << m << " ";
                }
                for (int a : ar2)
                    cout << a << " ";
                if (!sm)
                {
                    cout << m << " ";
                }
            }
            else
                for (int i = 0; i < n - 1; i++)
                {
                    int a;
                    cin >> a;
                }
        }
        cout << endl;
    }

    return 0;
}