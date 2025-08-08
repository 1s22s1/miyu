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

int main()
{
    init();

    ll N, K;
    cin >> N >> K;

    vector<ll> An;
    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    vector<ll> paths;

    ll current = 0;
    set<ll> set;
    ll l = -1;

    while (true)
    {
        if (set.contains(current))
        {
            auto target = find(paths.begin(), paths.end(), current);
            l = distance(paths.begin(), target);

            break;
        }
        else
        {
            set.insert(current);
        }

        paths.emplace_back(current);
        current = An.at(current) - 1;
    }

    if (K <= l)
    {
        cout << paths.at(K) + 1 << endl;
    }
    else
    {
        ll m = paths.size() - l;
        cout << paths.at((K - l) % m + l) + 1 << endl;
    }

    return 0;
}
