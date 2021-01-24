#include <bits/stdc++.h>
using namespace std;

const int N = 6;
vector<int> graph[N];
int vis[N] = {0};
void bfs(int s)
{
    queue<int> q;

    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    vis[s] = 1;
    q.push(s);

    while (!q.empty())
    {
        int x = q.front();
        cout << x << " ";
        q.pop();

        for (auto k : graph[x])
        {
            if (!vis[k])
            {
                vis[k] = 1;
                q.push(k);
            }
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

    bfs(0);
}