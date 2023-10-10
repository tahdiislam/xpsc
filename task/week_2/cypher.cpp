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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<string> arr_str(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            cin >> arr_str[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < arr_str[i].size(); j++)
            {
                if (arr_str[i][j] == 'U')
                {
                    if (arr[i] == 0)
                        arr[i] = 9;
                    else
                        arr[i]--;
                }
                else
                {
                    if (arr_str[i][j] == 'D')
                        if (arr[i] == 9)
                            arr[i] = 0;
                        else
                            arr[i]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}