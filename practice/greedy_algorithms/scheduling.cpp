#include <bits/stdc++.h>
using namespace std;

struct Event
{
    char event;
    int start, end;
};

bool compare(Event a, Event b)
{
    return a.end < b.end;
}

void maxEvents(Event events[], int n)
{
    // sort the array
    sort(events, events + n, compare);
    int i = 0;
    cout << events[i].event << '\n';
    for (int j = 1; j < n; j++)
    {
        if (events[j].start >= events[i].end)
        {
            cout << events[j].event << '\n';
            i = j;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // main code start here
    int n;
    cin >> n;
    Event events[n];
    for (int i = 0; i < n; i++)
    {
        cin >> events[i].event >> events[i].start >> events[i].end;
    }
    maxEvents(events, n);

    return 0;
}