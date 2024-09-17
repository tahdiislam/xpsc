#include <bits/stdc++.h>
using namespace std;

struct Activity
{
    int start, finish;
};

bool compare(Activity a, Activity b)
{
    return a.finish < b.finish;
}

void maxActivities(Activity arr[], int n)
{
    // sorting the activities based on finishing time
    sort(arr, arr + n, compare);
    int i = 0;
    cout << '(' << arr[i].start << ", " << arr[i].finish << ")\n";

    for (int j = 1; j < n; j++)
    {
        if (arr[j].start >= arr[i].finish)
        {
            cout << '(' << arr[j].start << ", " << arr[j].finish << ")\n";
            i = j;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // main code starts here
    int n;
    cin >> n;
    Activity arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].start >> arr[i].finish;
    }

    maxActivities(arr, n);
    return 0;
}