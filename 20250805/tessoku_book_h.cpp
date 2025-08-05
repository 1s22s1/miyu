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

    ll H, W;
    cin >> H >> W;

    vector<vector<ll>> An(H, vector<ll>(W, 0));

    rep(i, H)
    {
        rep(j, W)
        {
            ll a;
            cin >> a;

            An.at(i).at(j) = a;
        }
    }

    vector<vector<ll>> Sn(H);
    rep(i, H)
    {
        vector<ll> row = {An.at(i).at(0)};
        for (ll j = 1; j < W; j++)
        {
            row.emplace_back(row.back() + An.at(i).at(j));
        }

        Sn.at(i) = row;
    }

    for (ll i = 1; i < H; i++)
    {
        rep(j, W)
        {
            Sn.at(i).at(j) += Sn.at(i - 1).at(j);
        }
    }

    ll Q;
    cin >> Q;

    rep(i, Q)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << Sn.at(c - 1).at(d - 1) + Sn.at(a - 1).at(b - 1) - Sn.at(a - 1).at(d - 1) - Sn.at(c - 1).at(b - 1) << endl;
    }

    return 0;
}
