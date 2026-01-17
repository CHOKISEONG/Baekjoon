#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <list>
#include <algorithm>

using namespace std;

vector<int> adj[101];
bool visited[101];
int cnt{};

void dfs(int now)
{
    visited[now] = true;

    for (int next : adj[now])
    {
        if (!visited[next])
        {
            ++cnt;
            dfs(next);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n{}, pairCnt{};
    cin >> n >> pairCnt;

    for (int i{}; i < pairCnt; ++i)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    cout << cnt;
    return 0;
}