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
    string S, T;
    cin >> N >> M >> S >> T;

    vector<pair<ll, ll>> RLm;
    rep(i, M)
    {
        ll L, R;
        cin >> L >> R;
        RLm.emplace_back(L, R);
    }

    return 0;
}
