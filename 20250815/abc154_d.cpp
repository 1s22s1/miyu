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

    ll N, K;
    cin >> N >> K;

    vector<double> Pn = {0};
    rep(i, N)
    {
        double p;
        cin >> p;
        Pn.emplace_back(Pn.back() + (1.0 + p) / 2.0);
    }

    double answer = -1;

    for (ll i = K; i <= N; i++)
    {
        if (answer < Pn.at(i) - Pn.at(i - K))
        {
            answer = Pn.at(i) - Pn.at(i - K);
        }
    }

    cout << fixed << setprecision(10) << answer << endl;

    return 0;
}
