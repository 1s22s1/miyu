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

    vector<double> Rn, Cn;

    rep(i, N)
    {
        double r, c;
        cin >> r >> c;

        Rn.emplace_back(r);
        Cn.emplace_back(c);
    }

    auto r_result = minmax_element(Rn.begin(), Rn.end());
    ll r_move = (*r_result.second - *r_result.first + 1) / 2;

    auto c_result = minmax_element(Cn.begin(), Cn.end());
    ll c_move = (*c_result.second - *c_result.first + 1) / 2;

    cout << max(r_move, c_move) << endl;

    return 0;
}
