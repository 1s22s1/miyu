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

    ll N, Q;
    cin >> N >> Q;

    vector<ll> A(N + 2, 0);

    ll answer = 0;

    rep(i, Q)
    {
        ll a;
        cin >> a;

        if (A.at(a - 1) == 0 && A.at(a) == 1 && A.at(a + 1) == 0)
        {
            answer--;
        }

        if (A.at(a - 1) == 0 && A.at(a) == 0 && A.at(a + 1) == 0)
        {
            answer++;
        }

        if (A.at(a - 1) == 1 && A.at(a) == 0 && A.at(a + 1) == 1)
        {
            answer--;
        }

        if (A.at(a - 1) == 1 && A.at(a) == 1 && A.at(a + 1) == 1)
        {
            answer++;
        }

        if (A.at(a) == 0)
        {
            A.at(a) = 1;
        }
        else
        {
            A.at(a) = 0;
        }

        cout << answer << endl;
    }

    return 0;
}
