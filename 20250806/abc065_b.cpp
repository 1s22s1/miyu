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

    vector<ll> An;
    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    bool ok = false;
    ll current = 0;
    ll answer = 1;

    rep(i, 10e5)
    {
        if (An.at(current) - 1 == 1)
        {
            ok = true;
            break;
        }

        answer++;

        current = An.at(current) - 1;
    }

    if (ok)
    {
        cout << answer << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
