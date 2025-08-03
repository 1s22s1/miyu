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

    ll n, m;
    cin >> n >> m;

    vector<ll> Sn = {0};
    rep(i, n - 1)
    {
        ll d;
        cin >> d;
        Sn.emplace_back(Sn.back() + d);
    }

    ll answer = 0;
    ll current = 1;

    rep(i, m)
    {
        ll a;
        cin >> a;

        answer += abs(Sn.at(current + a - 1) - Sn.at(current - 1));
        answer %= 100000;

        current += a;
    }

    cout << answer << endl;

    return 0;
}
