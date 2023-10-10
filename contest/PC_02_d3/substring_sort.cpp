#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    return a.size() < b.size();
}

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), cmp);
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int a_s = arr[i].size();
        int b_s = arr[n - 1].size();
        int arr_02[26] = {0};
        for (int j = 0; j < a_s; j++)
            arr_02[arr[i][j] - 'a']++;
        int arr_03[26] = {0};
        string s = "";
        int a = 0, b = 0;
        while (b < b_s + 1)
        {
            s += arr[i][b];
            if (b >= a_s)
            {
                if (s == arr[i])
                {
                    cnt++;
                    break;
                }
                s.substr(1);
                a++;
            }
            b++;
        }
    }
    if (cnt != n - 1)
        cout << cnt << " NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}