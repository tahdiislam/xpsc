// #include <bits/stdc++.h>
// using namespace std;

// string arr[8][8];

// int main()
// {
//     for (int i = 0; i < 8; i++)
//         for (int j = 0; j < 8; j++)
//         {
//             arr[i][j] = to_string(j);
//             arr[i][j] += to_string(i + 1);
//         }
//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = 0; j < 8; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int a = s[0] - 'a';
//         cout << a << " " << s[1] << endl;
//         for (int i = 0; i < 8; i++)
//             for (int j = 0; j < 8; j++)
//             {
//                 string x = arr[i][j];
//                 // if (x[0] == a && x[1] != s[1])
//                 // {
//                 //     char m = static_cast<char>(x[0] + 'a');
//                 //     cout << m << j + 1 << endl;
//                 // }
//                 if (x[0] != a && x[1] == s[1])
//                 {
//                     char m = static_cast<char>(x[0]- '0' + 'a');
//                     cout << m << j << endl;
//                 }
//             }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 1; i <= 8; i++)
        {
            if (i != s[1] - '0')
                cout << s[0] << i << endl;
        }
        for (char i = 'a'; i < 'i'; i++)
            if (i != s[0])
                cout << i << s[1] << endl;
    }
    return 0;
}