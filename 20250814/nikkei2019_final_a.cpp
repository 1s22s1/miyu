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

    ll N;
    cin >> N;

    vector<ll> Sn = {0};
    rep(i, N)
    {
        ll a;
        cin >> a;
        Sn.emplace_back(Sn.back() + a);
    }

    for (ll i = 1; i <= N; i++)
    {
        ll max_value = 0;
        for (ll j = 0; i + j <= N; j++)
        {
            max_value = max(max_value, Sn.at(i + j) - Sn.at(j));
        }

        cout << max_value << endl;
    }

    return 0;
}
