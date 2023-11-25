#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int result = 0;
        while (n != 50)
        {
            if (n > 50)
            {
                n -= 3;
                result++;
            }
            else
            {
                n += 2;
                result++;
            }
        }
        cout << result << endl;
    }
    return 0;
}