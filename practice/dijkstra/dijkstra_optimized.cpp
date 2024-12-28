#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<pair<int, int>> v[N];
int dis[N];

void dijkstra(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    dis[s] = 0;
    while (!q.empty())
    {
        pair<int, int> parent = q.top();
        q.pop();
        int parent_node = parent.second;
        int parent_cost = parent.first;
        for (int i = 0; i < v[parent_node].size(); i++)
        {
            pair<int, int> child = v[parent_node][i];
            int child_node = child.first;
            int child_weight = child.second;
            int new_dis = parent_cost + child_weight;
            if (dis[child_node] > new_dis)
            {
                dis[child_node] = new_dis;
                q.push({new_dis, child_node});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }
    for (int i = 0; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": " << dis[i] << "\n";
    }
    return 0;
}