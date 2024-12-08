#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        double sum = 0;
        double odd_sum = 0;
        double even_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (i % 2 != 0)
                odd_sum += arr[i];
            else
                even_sum += arr[i];
        }
        double avg = sum / n;
        int a = (n % 2 == 0) ? (n / 2) : ((n / 2) + 1);
        double even_avg = even_sum / a;
        double odd_avg = odd_sum / (n - a);
        int int_part = static_cast<int>(avg);
        if (avg == int_part && avg == even_avg && avg == odd_avg)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}