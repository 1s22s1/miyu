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

ll N, Q;
map<ll, ll> frequency;
ll max_value = -1;

void solve()
{
    ll b;
    cin >> b;

    if (b > max_value)
    {
        cout << -1 << endl;
    }
    else
    {
    }
}

int main()
{
    init();

    cin >> N >> Q;
    rep(i, N)
    {
        ll a;
        cin >> a;

        max_value = max(max_value, a);
        frequency[a]++;
    }

    max_value++;

    rep(i, Q)
    {
        solve();
    }

    return 0;
}
