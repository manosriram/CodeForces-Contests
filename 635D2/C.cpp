#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
bool vis[11000];
vector<int> g[11000];
priority_queue<pair<int, int>> pq;

int DFS(int x, int c) {
    if (vis[x]) {
        return c;
    }

    vis[x] = true;
    for (auto ed: g[x]) {
        if (!vis[ed])
            pq.push(make_pair(DFS(ed, c+1), ed));
    }
    return c;
}

int main() {
    freopen("in", "r", stdin);
    int n, k, u, v;
    cin >> n >> k;
    
    for (int t=0;t<n-1;++t) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    DFS(1, 0);
    for (int t=0;t<=n;++t) vis[t] = false;

    int sm = 0;
    while (!pq.empty()) {
        if (vis[pq.top().second]) {
            pq.pop();
            continue;
        }
        if (k <= 0) break;
        if (!vis[pq.top().second]) {
            if (k > 0) {
                vis[pq.top().second] = true;
                --k;
            }
            sm += pq.top().first;
        }
        
        if (k <= 0) break;

        for (auto ed: g[pq.top().second]) {
            if (k > 0 && !vis[ed]) {
                vis[ed] = true;  
                --k;
            }
        }
        
        if (k <= 0) break;
        pq.pop();
    }
    cout << sm;
}

