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

    vector<ll> Sn = {0};
    rep(i, N - 1)
    {
        ll a;
        cin >> a;
        Sn.emplace_back(Sn.back() + a);
    }

    ll current = 0;
    ll answer = 0;
    rep(i, M)
    {
        ll a;
        cin >> a;

        answer += abs(Sn.at(current) - Sn.at(current + a));
        current += a;
        answer %= 100000;
    }

    cout << answer << endl;

    return 0;
}
