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

    vector<ll> row(S.size() + 1, 0);

    rep(i, S.size())
    {
        if (S.at(i) == '<')
        {
            row.at(i + 1) = row.at(i) + 1;
        }
    }

    for (ll i = S.size() - 1; i >= 0; i--)
    {
        if (S.at(i) == '>')
        {
            row.at(i) = max(row.at(i), row.at(i + 1) + 1);
        }
    }

    cout << accumulate(row.begin(), row.end(), 0L) << endl;

    return 0;
}
