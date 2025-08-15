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

    ll M, N, Q;
    cin >> M >> N >> Q;

    vector<vector<ll>> Jn(M, vector<ll>(N, 0));

    rep(i, M)
    {
        string t;
        cin >> t;

        rep(j, N)
        {
            if (t.at(j) == 'J')
            {

                Jn.at(i).at(j) = j == 0 ? 1 : Jn.at(i).at(j - 1) + 1;
            }
            else
            {
                Jn.at(i).at(j) = j == 0 ? 0 : Jn.at(i).at(j - 1);
            }
        }
    }

    rep(i, N)
    {
        for (ll j = 1; j < M; j++)
        {
            Jn.at(j).at(i) += Jn.at(j - 1).at(i);
        }
    }

    rep(i, Q)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << Jn.at(c - 1).at(d - 1) - Jn.at(a - 1).at(d - 1) - Jn.at(c - 1).at(b - 1) + Jn.at(a - 1).at(b - 1) << endl;
    }

    return 0;
}
