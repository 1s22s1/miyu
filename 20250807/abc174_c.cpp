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

    ll K;
    cin >> K;

    ll answer = 1;
    ll current = 7;

    rep(i, 10e6)
    {
        if (current % K == 0)
        {
            cout << answer << endl;

            return 0;
        }

        current = (current * 10 + 7) % K;
        answer++;
    }

    cout << -1 << endl;

    return 0;
}
