#include <bits/stdc++.h>
using namespace std;

const int N = 6;
vector<int> graph[N];
bool vis[N] = {0};

void dfs(int s)
{
    vis[s] = 1;
    cout << s;
    for (auto i : graph[s])
    {
        if (!vis[i])
        {
            vis[i] = 1;
            dfs(i);
        }
    }
}

int main()
{
    int ne, nv;
    cin >> ne >> nv;

    while (ne--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(0);
}
