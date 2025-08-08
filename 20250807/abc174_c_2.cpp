#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

template <typename T>

class LinearGraph
{

public:
    vector<ll> visited;
    vector<ll> previous;

    LinearGraph(T _graph)
    {
        graph = _graph;
    }

    void bfs(vector<ll> starts = {0})
    {
        visited.assign(graph.size(), -1);
        previous.assign(graph.size(), -1);

        queue<ll> queue;

        for (auto start : starts)
        {
            queue.push(start);
            visited.at(start) = 0;
        }

        while (!queue.empty())
        {
            auto current = queue.front();
            queue.pop();

            for (auto next : graph.at(current))
            {
                if (visited.at(next) != -1)
                {
                    continue;
                }

                queue.emplace(next);
                visited.at(next) = visited.at(current) + 1;
                previous.at(next) = current;
            }
        }
    }

private:
    T graph;
};

int main()
{
    init();

    ll K;
    cin >> K;

    vector<vector<ll>> g(K);
    rep(i, K)
    {
        g.at(i).emplace_back((i * 10 + 7) % K);
    }

    LinearGraph graph(g);

    graph.bfs({7 % K});
    auto visited = graph.visited;

    if (visited.at(0) == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << visited.at(0) + 1 << endl;
    }

    return 0;
}
