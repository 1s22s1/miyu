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

    map<ll, ll> count;
    rep(i, N)
    {
        ll a;
        cin >> a;
        count[a]++;
    }

    rep(i, M)
    {
        ll b;
        cin >> b;

        if (count[b])
        {
            count[b]--;
        }
    }

    for (auto [key, value] : count)
    {
        rep(i, value)
        {
            cout << key << ' ';
        }
    }

    cout << endl;

    return 0;
}
