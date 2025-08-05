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

    vector<string> pattern;
    rep(i, M)
    {
        string s;
        cin >> s;

        pattern.emplace_back(s);
    }

    vector<vector<ll>> Jn(M + 1, vector<ll>(N + 1, 0));

    rep(i, M)
    {
        rep(j, N)
        {
            if (pattern.at(i).at(j) == 'J')
            {
                Jn.at(i + 1).at(j + 1) = Jn.at(i).at(j) + 1;
            }
            else
            {
                Jn.at(i + 1).at(j + 1) = Jn.at(i).at(j);
            }
        }
    }

    rep(i, Q)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        // cout << Jn.at(c).at(d) - Jn.at(a).at(b) << endl;
    }

    return 0;
}
