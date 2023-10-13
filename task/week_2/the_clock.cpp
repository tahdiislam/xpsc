#include <bits/stdc++.h>
using namespace std;
int pal[16] = {
    0,
    70,
    140,
    210,
    280,
    350,
    601,
    671,
    741,
    811,
    881,
    951,
    1202,
    1272,
    1342,
    1412,
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int d;
        cin >> d;
        int i, j;
        string a, b;
        a += s[0];
        a += s[1];
        b += s[3];
        b += s[4];
        i = stoi(a);
        j = stoi(b);
        i = i * 60 + j;
        int cnt = 0;
        // for (int y = i; y < i + 1441; y += d)
        int w = 0;
        while (w < 1441)
        {

            // cout << y << " ";
            for (int x = 0; x < 16; x++)
            {
                if (pal[x] == i)
                {
                    cout << w << " " << i << " ";
                    cnt++;
                }
            }
            if (i > 1440)
            {
                int u = i - 1440;
                i = u;
            }
            else
                i += d;
            w += d;
        }
        cout << cnt << endl;
    }

    // int cnt = 0;
    // for (int i = 0; i < 24; i++)
    //     for (int j = 0; j < 60; j++)
    //     {
    //         string s;
    //         s = "";
    //         if (i < 10 && j < 10)
    //         {
    //             s += "0";
    //             s += to_string(i);
    //             s += ":";
    //             s += "0";
    //             s += to_string(j);
    //         }
    //         else if (i < 10)
    //         {
    //             // s = "";
    //             s += "0";
    //             s += to_string(i);
    //             s += ":";
    //             s += to_string(j);
    //         }
    //         else if (j < 10)
    //         {
    //             // s = "";
    //             s += to_string(i);
    //             s += ":";
    //             s += "0";
    //             s += to_string(j);
    //         }
    //         else
    //         {
    //             // s = "";
    //             s += to_string(i);
    //             s += ":";
    //             s += to_string(j);
    //         }
    //         cout << cnt << " -> " << s << endl;
    //         string a = s;
    //         reverse(a.begin(), a.end());
    //         if (a == s)
    //             cout << cnt << " -> " << s << endl;
    //         cnt++;
    //     }
    return 0;
}