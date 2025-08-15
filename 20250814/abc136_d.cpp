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

    vector<vector<ll>> children_vector(50, vector<ll>(S.size(), 0));
    rep(i, S.size())
    {
        if (S.at(i) == 'R')
        {
            children_vector.at(0).at(i) = i + 1;
        }
        else
        {
            children_vector.at(0).at(i) = i - 1;
        }
    }

    for (ll i = 1; i <= 49; i++)
    {
        rep(j, S.size())
        {
            children_vector.at(i).at(j) = children_vector.at(i - 1).at(children_vector.at(i - 1).at(j));
        }
    }

    vector<ll> answer(S.size(), 0);
    for (auto e : children_vector.at(49))
    {
        answer.at(e)++;
    }

    for (auto e : answer)
    {
        cout << e << ' ';
    }

    cout << endl;

    return 0;
}
