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

    ll N, M;
    cin >> N >> M;

    vector<ll> An;
    vector<ll> Bm;

    map<ll, ll> freq_map;

    rep(i, N)
    {
        ll a;
        cin >> a;

        freq_map[a]++;
    }

    rep(i, M)
    {
        ll b;
        cin >> b;

        if (freq_map.count(b))
        {
            freq_map[b]--;
        }
    }

    for (auto [key, value] : freq_map)
    {
        rep(i, value)
        {
            cout << key << ' ';
        }
    }

    cout << endl;

    return 0;
}
