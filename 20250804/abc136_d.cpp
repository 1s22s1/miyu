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

    string S;
    cin >> S;

    vector<vector<ll>> dp(32, vector<ll>(S.size(), 0));

    rep(i, S.size())
    {
        dp.at(0).at(i) = S.at(i) == 'R' ? i + 1 : i - 1;
    }

    rep(i, 31)
    {
        rep(j, S.size())
        {
            dp.at(i + 1).at(j) = dp.at(i).at(dp.at(i).at(j));
        }
    }

    vector<ll> answer(S.size(), 0);
    rep(i, S.size())
    {
        answer[dp.at(31).at(i)]++;
    }

    for (auto e : answer)
    {
        cout << e << ' ';
    }
    cout << endl;

    return 0;
}
