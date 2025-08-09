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

    string s;
    cin >> s;

    vector<ll> indices;
    rep(i, s.size())
    {
        if (s.at(i) == 't')
        {
            indices.emplace_back(i);
        }
    }

    double answer = 0;
    for (ll i = 0; i < indices.size(); i++)
    {
        for (ll j = i + 1; j < indices.size(); j++)
        {
            ll sub_length = indices.at(j) - indices.at(i) + 1;
            if (sub_length >= 3)
            {
                string sub = s.substr(indices.at(i), sub_length);

                ll x = count(sub.begin(), sub.end() + 1, 't');

                double current = ((double)x - 2) / (sub_length - 2);
                answer = max(answer, current);
            }
        }
    }

    cout << fixed << setprecision(10) << answer << endl;

    return 0;
}
