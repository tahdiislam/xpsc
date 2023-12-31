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
        char arr[3][3];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> arr[i][j];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] == '?')
                {
                    if (j == 0)
                    {
                        if (arr[i][1] == 'A' && arr[i][2] == 'B')
                        {
                            cout << 'C' << "\n";
                            break;
                        }
                        else if (arr[i][1] == 'B' && arr[i][2] == 'A')
                        {
                            cout << 'C' << "\n";
                            break;
                        }
                        else if (arr[i][1] == 'A' && arr[i][2] == 'C')
                        {
                            cout << 'B' << "\n";
                            break;
                        }
                        else if (arr[i][1] == 'C' && arr[i][2] == 'A')
                        {
                            cout << 'B' << "\n";
                            break;
                        }
                        else
                        {
                            cout << 'A' << "\n";
                            break;
                        }
                    }
                    else if (j == 1)
                    {
                        if (arr[i][0] == 'A' && arr[i][2] == 'B')
                        {
                            cout << 'C' << "\n";
                            break;
                        }
                        else if (arr[i][0] == 'B' && arr[i][2] == 'A')
                        {
                            cout << 'C' << "\n";
                            break;
                        }
                        else if (arr[i][0] == 'A' && arr[i][2] == 'C')
                        {
                            cout << 'B' << "\n";
                            break;
                        }
                        else if (arr[i][0] == 'C' && arr[i][2] == 'A')
                        {
                            cout << 'B' << "\n";
                            break;
                        }
                        else
                        {
                            cout << 'A' << "\n";
                            break;
                        }
                    }
                    else if (j == 2)
                    {
                        if (arr[i][0] == 'A' && arr[i][1] == 'B')
                        {
                            cout << 'C' << "\n";
                            break;
                        }
                        else if (arr[i][0] == 'B' && arr[i][1] == 'A')
                        {
                            cout << 'C' << "\n";
                            break;
                        }
                        else if (arr[i][0] == 'A' && arr[i][1] == 'C')
                        {
                            cout << 'B' << "\n";
                            break;
                        }
                        else if (arr[i][0] == 'C' && arr[i][1] == 'A')
                        {
                            cout << 'B' << "\n";
                            break;
                        }
                        else
                        {
                            cout << 'A' << "\n";
                            break;
                        }
                    }
                }
            }
    }
    return 0;
}