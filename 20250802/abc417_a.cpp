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

    ll N, A, B;
    string S;

    cin >> N >> A >> B >> S;

    for (ll i = A; i < N - B; i++)
    {
        cout << S.at(i);
    }

    cout << endl;

    return 0;
}
