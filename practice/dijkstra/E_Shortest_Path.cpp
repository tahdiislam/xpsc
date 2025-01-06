#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <tuple>
#include <climits>

using namespace std;

void rec(int u, int v, vector<vector<int>>& pre) {
    if (v) {
        rec(pre[u][v], u, pre);
        cout << v << " ";
    }
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    // Graph representation: adjacency list (unweighted)
    vector<vector<int>> g(n + 1); // {neighbor}
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // Set of forbidden triples (u, v, w)
    set<tuple<int, int, int>> bad;
    for (int i = 0; i < k; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        bad.insert(make_tuple(u, v, w));
    }

    // Distance and predecessor arrays
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MAX));
    vector<vector<int>> pre(n + 1, vector<int>(n + 1, 0));

    // Priority queue: {distance, u, v}
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;

    // Start from node 1
    pq.push({0, 0, 1});
    dp[0][1] = 0;

    while (!pq.empty()) {
        // Explicitly unpack the tuple
        auto top = pq.top();
        int dist = get<0>(top);
        int u = get<1>(top);
        int v = get<2>(top);
        pq.pop();

        // If we reached the destination, print the result
        if (v == n) {
            cout << dist << endl;
            rec(u, v, pre);
            return 0;
        }

        // Explore neighbors
        for (int w : g[v]) {
            int new_dist = dp[u][v] + 1; // Unweighted graph: each edge has weight 1
            if (new_dist < dp[v][w] && bad.find(make_tuple(u, v, w)) == bad.end()) {
                dp[v][w] = new_dist;
                pq.push({new_dist, v, w});
                pre[v][w] = u;
            }
        }
    }

    // If no path is found
    cout << -1 << endl;
    return 0;
}