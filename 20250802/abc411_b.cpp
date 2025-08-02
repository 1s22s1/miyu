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

    vector<ll> Dn;
    rep(i, N - 1)
    {
        ll d;
        cin >> d;

        Dn.emplace_back(d);
    }

    for (ll i = 0; i < N - 1; i++)
    {
        ll distance = 0;
        for (ll j = i; j < N - 1; j++)
        {
            distance += Dn.at(j);

            cout << distance << ' ';
        }

        cout << endl;
    }

    return 0;
}
